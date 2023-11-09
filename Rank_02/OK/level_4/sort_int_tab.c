// Assignment name  : sort_int_tab
// Expected files   : sort_int_tab.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write the following function:

// void sort_int_tab(int *tab, unsigned int size);

// It must sort (in-place) the 'tab' int array, that contains exactly 'size'
// members, in ascending order.

// Doubles must be preserved.

// Input is always coherent.

// Bubble sort

#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i = 0;
    int temp;

    while (i < size)
    {
        if (tab[i] > tab[i + 1])
        {
            temp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = temp;
            i = 0;
        }
        else
            i++;
    }
}

int main(void)
{
    int tab[] = {3, 4, 1, 5, 2, 8, 6, 2, 9};
    unsigned int size = sizeof(tab) / sizeof(tab[0]);
    int i = 0;

    while(i < size)
    {
        printf("%d", tab[i]);
        i++;
    }
    printf("\n");

    sort_int_tab(tab, size);
    printf("---------------\n");
    i = 0;
    while(i < size)
    {
        printf("%d", tab[i]);
        i++;
    }
    printf("\n");
    return (0);
}
