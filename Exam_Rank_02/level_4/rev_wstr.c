// Assignment name  : rev_wstr
// Expected files   : rev_wstr.c
// Allowed functions: write, malloc, free
// --------------------------------------------------------------------------------

// Write a program that takes a string as a parameter, and prints its words in
// reverse order.

// A "word" is a part of the string bounded by spaces and/or tabs, or the
// begin/end of the string.

// If the number of parameters is different from 1, the program will display
// '\n'.

// In the parameters that are going to be tested, there won't be any "additional"
// spaces (meaning that there won't be additionnal spaces at the beginning or at
// the end of the string, and words will always be separated by exactly one space).

// Examples:

// $> ./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e
// ironic? it Isn't gatherings. love I But people! hate You$
// $>./rev_wstr "abcdefghijklm"
// abcdefghijklm
// $> ./rev_wstr "Wingardium Leviosa" | cat -e
// Leviosa Wingardium$
// $> ./rev_wstr | cat -e
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

void    ft_rev_split(char *str)
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
    j--;
    while (j >= 0)
    {
        ft_putstr(temp[j]);
        if (j > 0)
            write(1, " ", 1);
        j--;
    }
    write(1, "\n", 1);
    free(temp);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        ft_rev_split(av[1]);
    }
    else
        write(1, "\n", 1);
    return (0);
}