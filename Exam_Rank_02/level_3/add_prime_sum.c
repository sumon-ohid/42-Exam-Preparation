// Assignment name  : add_prime_sum
// Expected files   : add_prime_sum.c
// Allowed functions: write, exit
// --------------------------------------------------------------------------------

// Write a program that takes a positive integer as argument and displays the sum
// of all prime numbers inferior or equal to it followed by a newline.

// If the number of arguments is not 1, or the argument is not a positive number,
// just display 0 followed by a newline.

// Yes, the examples are right.

// Examples:

// $>./add_prime_sum 5
// 10
// $>./add_prime_sum 7 | cat -e
// 17$
// $>./add_prime_sum | cat -e
// 0$
// $>

#include <stdlib.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

int ft_atoi(char *str)
{
    int res = 0;

    while (*str)
    {
        res = res * 10 + *str++ - '0';
    }
    return (res);
}

void ft_putnbr(int n)
{
    char digit;

    if (n >= 10)
        ft_putnbr(n / 10);
    digit = n % 10 + '0';
    ft_putchar(digit);
}

int add_prime_sum(int num)
{
    int i;

    i = 2;
    if (num <= 1)
        return (0);
    while (i * i <= num)
    {
        if (num % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int nbr = ft_atoi(argv[1]);
        int sum = 0;

        while (nbr > 0)
        {
            if (add_prime_sum(nbr))
                sum += nbr;
            nbr--;
        }
        ft_putnbr(sum);
    }
    ft_putchar('\n');
    return (0);
}