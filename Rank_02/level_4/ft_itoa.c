// Assignment name  : ft_itoa
// Expected files   : ft_itoa.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write a function that takes an int and converts it to a null-terminated string.
// The function returns the result in a char array that you must allocate.

// Your function must be declared as follows:

// char	*ft_itoa(int nbr);

#include <stdlib.h>
#include <stdio.h>

int counter(int n)
{
    int i = 0;
    if (n <= 0)
        i++;
    while (n)
    {
        n = n / 10;
        i++;
    }
    return (i);
}

char *ft_itoa(int num)
{
    int len = counter(num);
    char *str;

    str = (char *)malloc(sizeof(char) * len + 1);
    if (!str)
        return (NULL);
    str[len] = '\0';
    len--;
    if (num == -2147483647)
        return ("-2147483647\0");
    if (num < 0)
    {
        str[0] = '-';
        num = -num;
    }
    if (num == 0)
    {
        str[0] = '0';
        return (str);
    }
    while (num)
    {
        str[len--] = num % 10 + '0';
        num = num / 10;
    }
    return (str);
}

int main(void)
{
    int     a = -45652;
    char    *b = ft_itoa(a);
    printf("%s\n", b);
    return (0);
}