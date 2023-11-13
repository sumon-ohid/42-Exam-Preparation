#include <stdio.h>
#include <stdlib.h>

void fprime(char *str)
{
    int i = 1;
    int n = atoi(str);

    if (n == 1)
        printf("1");
    while (++i <= n)
    {
        if (n % i == 0)
        {
            printf("%d", i);
            if (i == n)
                break;
            printf("*");
            n = n / i;
            i = 1;
        }
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        fprime(av[1]);
    printf("\n");
    return (0);
}