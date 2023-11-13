#include <stdio.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int res = 0;
    unsigned int i = 1;

    if (a == 0 || b == 0)
        return (0);
    while (i)
    {
        if (i % a == 0 && i % b == 0)
        {
            res = i;
            break;
        }
        i++;
    }
    return (res);
}

// int main(void)
// {
//     unsigned int a = 170;
//     unsigned int b = 20;
//     unsigned int res = lcm(a, b);
//     printf("%d\n", res);
//     return (0);
// }