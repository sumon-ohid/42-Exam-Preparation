#include <stdlib.h>
#include <stdio.h>

int ft_abs(int num)
{
    if (num < 0)
        return (-num);
    else
        return (num);
}

int     *ft_rrange(int start, int end)
{
    int i = 0;
    int len = ft_abs(end - start) + 1;
    int *res = (int *)malloc (sizeof(int) * len);

    while (i < len)
    {
        if (start < end)
        {
            res[i] = end;
            end--;
            i++;
        }
        else
        {
            res[i] = end;
            end++;
            i++;
        }
    }
    return (res);
}

// int main(void)
// {
//     int i = 0;
//     int start = 0;
//     int end = -3;
//     int *res = ft_rrange(start, end);
//     while (i < ft_abs(end - start) + 1)
//     {
//         printf("%d ", res[i]);
//         i++;
//     }
//     printf("\n");
//     free (res);
//     return (0);
// }