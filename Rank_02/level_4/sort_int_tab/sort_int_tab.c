#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i = 0;
    int temp = 0;

    while (i < size - 1)
    {
        if (tab[i] > tab[i + 1])
        {
            temp = tab[i + 1];
            tab[i + 1] = tab[i];
            tab[i] = temp;
            i = 0;
        }
        else
            i++;
    }
}

// int main(void)
// {
//     int tab[] = {10, 3, 54, 9};
//     unsigned int size = 4;
//     unsigned int i = 0;
//     sort_int_tab(tab, size);
//     while (i < size)
//     {
//         printf("%d ", tab[i]);
//         i++;
//     }
//     printf("\n");
//     return (0);
// }