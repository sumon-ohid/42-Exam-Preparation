// Assignment name  : rostring
// Expected files   : rostring.c
// Allowed functions: write, malloc, free
// --------------------------------------------------------------------------------

// Write a program that takes a string and displays this string after rotating it
// one word to the left.

// Thus, the first word becomes the last, and others stay in the same order.

// A "word" is defined as a part of a string delimited either by spaces/tabs, or
// by the start/end of the string.

// Words will be separated by only one space in the output.

// If there's less than one argument, the program displays \n.

// Example:

// $>./rostring "abc   " | cat -e
// abc$
// $>
// $>./rostring "Que la      lumiere soit et la lumiere fut"
// la lumiere soit et la lumiere fut Que
// $>
// $>./rostring "     AkjhZ zLKIJz , 23y"
// zLKIJz , 23y AkjhZ
// $>
// $>./rostring "first" "2" "11000000"
// first
// $>
// $>./rostring | cat -e
// $
// $>

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
        i++;
    return (i);
}

void ft_putstr(char *str)
{
    int i = 0;

    while (str[i])
    {
        write (1, &str[i], 1);
        i++;
    }
}

void    ft_rostring(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char **temp;
    int len = ft_strlen(str);

    temp = (char **)malloc(sizeof(char *) * len);
    while(str[i] != '\0')
    {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        {
            temp[j] = (char *)malloc(sizeof(char));
            k = 0;
            while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
                temp[j][k++] = str[i++];
            temp[j][k] = '\0';
            j++;
        }
        else
            i++;
    }
    i = j;
    j = 1;
    while (j < i)
    {
        ft_putstr(temp[j]);
        if (j > 0)
            write(1, " ", 1);
        j++;
    }
    ft_putstr(temp[0]);
    write(1, "\n", 1);
    free(temp);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        ft_rostring(av[1]);
        write(1, "\n", 1);
    }
    else if(ac > 2)
    {
        ft_rostring(av[1]);
        write(1, "\n", 1);
    }
    else
    {
        write(1, "\n", 1);
        write(1, "\n", 1);
    }
    return (0);
}