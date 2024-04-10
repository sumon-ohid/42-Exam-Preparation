/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   microshell.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msumon < msumon@student.42vienna.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 09:07:16 by msumon            #+#    #+#             */
/*   Updated: 2024/04/10 09:54:41 by msumon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "microshell.h"

int error(char *msg)
{
    int i = 0;
    while (msg[i])
    {
        write(2, &msg[i], 1);
        i++;
    }
    return (1);
}

int cd(char **argv, int i)
{
    if (i != 2)
        return (error("error: cd: bad arguments\n"));
    else if (chdir(argv[1]) == -1)
        return (error("cd: cannot change directory to "), error(argv[1]), error("\n"));
    return (0);
}

int exec(char **argv, char **envp, int i)
{
    int fd[2];
    int status = 0;
    int has_pipe = argv[i] && !strcmp(argv[i], "|");
    
    if (has_pipe && pipe(fd) == -1)
        return (error("error: fatal\n"));

    int pid = fork();
    if (!pid)
    {
        argv[i] = 0;
        if (has_pipe && (dup2(fd[1], 1) == -1 || close(fd[0]) == -1 || close(fd[1]) == -1))
            return (error("error: fatal\n"));
        execve(*argv, argv, envp);
        return (error("error: cannot execute "), error(*argv), error("\n"));
    }
    
    waitpid(pid, &status, 0);
    if (has_pipe && (dup2(fd[0], 0) == -1 || close(fd[0]) == -1 || close(fd[1]) == -1))
        return (error("error: fatal\n"));
    return WIFEXITED(status) && WEXITSTATUS(status);
}

int main(int argc, char **argv, char **envp)
{
    int i = 0;
    int status = 0;

    if (argc < 2)
    {
        error("error: invalid number of arguments\n");
        return (1);
    }
    else
    {
        while (argv[i] && argv[++i])
        {
            argv += i;
            i = 0;
            while (argv[i] && strcmp(argv[i], "|") && strcmp(argv[i], ";"))
                i++;
            if (!strcmp(*argv, "cd"))
                status = cd(argv, i);
            else if (i)
                status = exec(argv, envp, i);
        }
    }
    return (status);
}
