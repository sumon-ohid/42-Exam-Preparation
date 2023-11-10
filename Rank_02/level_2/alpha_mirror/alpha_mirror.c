/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msumon <msumon@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 09:49:24 by msumon            #+#    #+#             */
/*   Updated: 2023/11/10 09:58:47 by msumon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void alpha_mirror(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            ft_putchar(155 - str[i]);
        else if (str[i] >= 'a' && str[i] <= 'z')
            ft_putchar(219 - str[i]);
        else
            write (1, &str[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        alpha_mirror(av[1]);
    }
    write (1, "\n", 1);
    return (0);
}