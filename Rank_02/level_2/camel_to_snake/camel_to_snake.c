#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void camel_to_snake(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            write (1, "_", 1);
            ft_putchar(str[i] + 32);
        }
        else
            write (1, &str[i], 1);
        i++;
    }    
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        camel_to_snake(av[1]);
    }
    write (1, "\n", 1);
    return (0);
}