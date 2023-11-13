#include <stdio.h>
#include <stdlib.h>

void pgcd(char *s1, char *s2)
{
    unsigned int n1 = atoi(s1);
    unsigned int n2 = atoi(s2);
    unsigned int i = 1;
    unsigned int ac = 0;

    while (i <= n1 || i <= n2)
    {
        if (n1 % i == 0 && n2 % i == 0)
            ac = i;
        i++;
    }
    printf("%d", ac);
} 

int main(int ac, char **av)
{
    if (ac == 3)
    {
        pgcd(av[1], av[2]);
    }
    printf("\n");
    return (0);
}