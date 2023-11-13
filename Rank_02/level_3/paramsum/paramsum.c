#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void ft_putnbr(int n)
{
    if (n < 10)
        ft_putchar(n + '0');
    else
    {
        ft_putnbr (n / 10);
        ft_putchar(n % 10 + '0');
    }
}

int main(int ac, char **av)
{
    av = 0;
    ft_putnbr(ac - 1);
    ft_putchar ('\n');
    return (0);
}