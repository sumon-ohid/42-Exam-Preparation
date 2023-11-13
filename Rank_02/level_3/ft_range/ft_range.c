#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int ft_abs(int num)
{
    if (num < 0)
        return (-num);
    else
        return (num);
}

int     *ft_range(int start, int end)
{
    int i = 0;
    int len = ft_abs(end - start) + 1;
    printf("%d\n", len);
    int *res = (int *) malloc(sizeof(int) * len);
    if (!res)
        return (0);
    while (i < len)
    {
        if (start < end)
        {
            res[i] = start;
            start++;
            i++;
        }
        else
        {
            res[i] = start;
            start--;
            i++;
        }
    }
    return (res);
}

// int main()
// {
//     int start = -3, end = 3;
//     int *result = ft_range(start, end);
//     int i = 0;

//     printf("Result : ");
//     while (i < ft_abs(end - start) + 1)
//     {
//         printf("%d ", result[i]);
//         i++;
//     }
//     free(result);
//     printf("\n");
//     return 0;
// }
