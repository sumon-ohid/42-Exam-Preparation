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

int     counter(int nbr)
{
    int i = 0;
    if (nbr <= 0)
        i++;
    while (nbr)
    {
        nbr = nbr / 10;
        i++;
    }
    printf("%d\n", i);
    return (i);
}

char    *ft_itoa(int nbr)
{
    char *str;
    int len = counter(nbr);

    str = (char *)malloc(sizeof(char) * len + 1);
    if (!str)
        return (NULL);
    str[len] = '\0';
    len--;
    if(nbr == -2147483648)
		return("-2147483648\0");
    if (nbr == 0)
    {
        str[0] = '0';
        return (str);
    }
    if (nbr < 0)
    {
        str[0] = '-';
        nbr = -nbr;
    }
    while (nbr)
    {
        str[len--] = nbr % 10 + '0';
        nbr = nbr / 10;
    }
    return (str);
}

int main(void)
{
    int     a = -54542;
    char    *b = ft_itoa(a);
    printf("%s\n", b);
    return (0);
}