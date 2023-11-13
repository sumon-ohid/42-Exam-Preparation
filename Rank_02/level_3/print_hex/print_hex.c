#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
    int i = 0;
    int sign = 1;
    int res = 0;
    if (str[0] == '-')
    {
        i++;
        sign = -1;
    }
    while (str[i])
    {
        res = res + str[i] - '0';
        if (str[i + 1] == '\0')
            break;
        res = res * 10;
        i++;
    }
    return (res * sign);
}

void print_hex(char *str)
{
    int n = ft_atoi(str);
    int i = 0;
    char res[100];
    char hex[] = "0123456789abcdef";
    while (n)
    {
        res[i] = hex[n % 16];
        n = n / 16;
        i++;
    }
    while (i--)
        write (1, &res[i], 1);

}

int main(int ac, char **av)
{
    if (ac == 2)
        print_hex(av[1]);
    write (1, "\n", 1);
    return (0);
}