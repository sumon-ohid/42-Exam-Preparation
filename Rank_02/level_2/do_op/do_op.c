#include <stdio.h>
#include <stdlib.h>

void do_op(char *s1, char *symbol, char *s2)
{
    int n1 = atoi(s1);
    char sign = symbol[0];
    int n2 = atoi(s2);
    int res = 0;

    if (sign == '+')
    {
        res = n1 + n2;
        printf("%d", res);
    }
    else if (sign == '-')
    {
        res = n1 - n2;
        printf("%d", res);
    }
    else if (sign == '*')
    {
        res = n1 * n2;
        printf("%d", res);
    }
    else if (sign == '/')
    {
        res = n1 / n2;
        printf("%d", res);
    }
    else
        printf("Invalid Operation");
}

int main(int ac, char **av)
{
    if (ac == 4)
    {
        do_op(av[1], av[2], av[3]);
    }
    printf("\n");
    return (0);
}
