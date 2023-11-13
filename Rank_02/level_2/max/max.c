#include <stdio.h>

int		max(int *tab, unsigned int len)
{
    unsigned int i = 0;
    int max = 0;

    if (len == 0)
        return (0);
    while (i < len)
    {
        if (tab[i] > max)
            max = tab[i];
        i++;
    }
    return (max);
}

// int main(void)
// {
//     int tab[] = {2, 22, 4, 44, 9, 42};
//     unsigned int len = 6;
//     int res = max(tab, len);
//     printf("%d\n", res);
//     return (0);
// }
