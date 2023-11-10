#include <stdio.h>

int ft_atoi(const char *str)
{
    int i = 0;
    int sign = 1;
    int res = 0;

    while (str[i] == ' ' || str[i] == '\t')
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = sign * -1;
        i++;
    }
    while (str[i] && str[i] >= '0' && str[i] <= '9')
    {
        res = res + str[i] - '0';
        if (str[i + 1] == '\0')
            break;
        res = res * 10;
        i++;
    }
    return (res * sign);
}

int main (void)
{
    const char *str = "    ---+++2147483648";
    int res = ft_atoi(str);
    printf("%d\n", res);
    return (0);
}