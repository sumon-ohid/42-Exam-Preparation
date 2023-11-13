#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void ft_putstr(char *str)
{
    int i = 0;

    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}

int ft_atoi(char *str)
{
    int i = 0;
    int res = 0;

    while (str[i])
    {
        res = res + str[i] - '0';
        if (str[i + 1] == '\0')
            break;
        res = res * 10;
        i++;
    }
    return (res);
}

void ft_putnbr(int n)
{
    if (n < 10)
        ft_putchar(n + '0');
    else
    {
        ft_putnbr(n / 10);
        ft_putchar(n % 10 + '0');
    }
}

void tab_mult(char *str)
{
    int n = ft_atoi(str);
    int i = 1;
    int multi = 0;

    while (i < 10)
    {
        ft_putnbr(i);
        ft_putchar(' ');
        ft_putchar('x');
        ft_putchar(' ');
        ft_putnbr(n);
        ft_putchar(' ');
        ft_putchar('=');
        ft_putchar(' ');
        multi = i * n;
        ft_putnbr(multi);
        ft_putchar('\n');
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        tab_mult(av[1]);
    }
    write (1, "\n", 1);
    return (0);
}