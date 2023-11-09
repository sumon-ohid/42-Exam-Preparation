#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void rot_13(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            ft_putchar((str[i] - 'A' + 13) % 26 + 'A');
        else if (str[i] >= 'a' && str[i] <= 'z')
            ft_putchar((str[i] - 'a' + 13) % 26 + 'a');
        else
            write (1, &str[i] , 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        rot_13(av[1]);
    }
    write (1, "\n", 1);
    return (0);
}