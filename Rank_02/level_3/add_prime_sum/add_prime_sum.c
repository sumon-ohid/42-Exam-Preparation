#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

int ft_atoi(char *str)
{
    int i = 0;
    int res = 0;

    while(str[i])
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
        ft_putchar((n % 10) + '0');
    }
}

void add_prime_sum(char *str)
{
    int i = 2;
    int j;
    int sum = 0;
    int num = ft_atoi(str);

    while (i <= num)
    {
        j = 2;
        while (i % j != 0)
            j++;
        if (i == j)
            sum = sum + i;
        i++;
    }
    ft_putnbr(sum);
}

int main(int ac, char **av)
{
    if (ac == 2)
        add_prime_sum(av[1]);
    write (1, "\n", 1);
    return (0);
}