#include <stdio.h>
#include <stdlib.h>

int ft_len(int n)
{
    int i = 0;

    while(n)
    {
        n = n / 10;
        i++;
    }
    return (i);
}

char	*ft_itoa(int nbr)
{
    int i = 0;
    int len = ft_len(nbr);
    char *str;

    if (nbr < 0)
        len++;
    if (nbr == -2147483648)
        return ("-2147483648\0");
    str = (char *)malloc (sizeof(char) * len + 1);
    if (!str)
        return (NULL);
    str[len] = '\0';
    if (nbr == 0)
    {
        str[0] = '0';
        return (str);
    }
    if (nbr < 0)
    {
        str[0] = '-';
        nbr = -nbr;
        i++;
    }
    len--;
    while (nbr)
    {
        str[len--] = nbr % 10 + '0';
        nbr = nbr / 10;
    }
    return (str);
}

// int main(void)
// {
//     int n = 4242;
//     char *res = ft_itoa(n);
//     printf("%s\n", res);
//     return (0);
// }
