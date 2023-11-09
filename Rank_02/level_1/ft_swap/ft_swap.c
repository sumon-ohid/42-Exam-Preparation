#include <stdio.h>

void	ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

// int main(void)
// {
//     int a = 10;
//     int b = 20;

//     printf("Before swap\n");
//     printf("a : %d  b : %d\n", a, b);
//     ft_swap(&a, &b);
//     printf("After swap\n");
//     printf("a : %d  b : %d\n", a, b);
//     return (0);
// }