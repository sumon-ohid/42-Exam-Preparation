// Assignment name  : rot_13
// Expected files   : rot_13.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a string and displays it, replacing each of its
// letters by the letter 13 spaces ahead in alphabetical order.

// 'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.

// The output will be followed by a newline.

// If the number of arguments is not 1, the program displays a newline.

// Example:

// $>./rot_13 "abc"
// nop
// $>./rot_13 "My horse is Amazing." | cat -e
// Zl ubefr vf Nznmvat.$
// $>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
// NxwuM mYXVWm , 23l $
// $>./rot_13 | cat -e
// $
// $>
// $>./rot_13 "" | cat -e
// $
// $>

#include <unistd.h>

void    ft_putchar(char c)
{
    write (1, &c, 1);
}

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc == 2)
    {
        while (argv[1][i])
        {
            if ((argv[1][i] >= 'A' && argv[1][i] <= 'Z') 
                    || (argv[1][i] >= 'a' && argv[1][i] <= 'z'))
            {
                if (argv[1][i] == 'z')
                    ft_putchar('m');
                else if (argv[1][i] == 'Z')
                    ft_putchar('M');
                else if (argv[1][i] >= 'a' && argv[1][i] <= 'y')
                    ft_putchar((argv[1][i] - 'a' + 13) % 26 + 'a');
                else if (argv[1][i] >= 'A' && argv[1][i] <= 'Y')
                    ft_putchar((argv[1][i] - 'a' + 13) % 26 + 'a');
            }
            else
                ft_putchar(argv[1][i]);
            i++;
        }
        ft_putchar('\n');
    }
    else
        ft_putchar('\n');
}