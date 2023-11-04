// Assignment name  : str_capitalizer
// Expected files   : str_capitalizer.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes one or several strings and, for each argument,
// capitalizes the first character of each word (If it's a letter, obviously),
// puts the rest in lowercase, and displays the result on the standard output,
// followed by a \n.

// A "word" is defined as a part of a string delimited either by spaces/tabs, or
// by the start/end of the string. If a word only has one letter, it must be
// capitalized.

// If there are no arguments, the progam must display \n.


#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int is_whitespace(char c)
{
    return (c == ' ' || c == '\t');
}

int main(int ac, char **av)
{
    int i;
    int j;

    i = 1;
    if (ac > 1)
    {
        while (av[i])
        {
            j = 0;
            while (av[i][j])
            {
                if (j == 0 || is_whitespace(av[i][j - 1]))
                {
                    if (av[i][j] >= 'a' && av[i][j] <= 'z')
                        ft_putchar(av[i][j] - 32);
                    else
                        ft_putchar(av[i][j]);
                }
                else
                {
                    if (av[i][j] >= 'A' && av[i][j] <= 'Z')
                        ft_putchar(av[i][j] + 32);
                    else
                        ft_putchar(av[i][j]);
                }
                j++;
            }
            ft_putchar('\n');
            i++;
        }
    }
    else
        ft_putchar('\n');
    return (0);
}

