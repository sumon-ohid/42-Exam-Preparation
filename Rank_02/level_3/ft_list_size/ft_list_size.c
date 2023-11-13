#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_list_size(t_list *begin_list)
{
    int i = 0;
    t_list *start = begin_list;
    while (start != NULL)
    {
        i++;
        start = start->next;
    }
    return (i);
}

// int main(void)
// {
//     t_list *list = malloc(sizeof(t_list));
//     list->data = "1";
//     list->next = malloc(sizeof(t_list));
//     list->next->data = "2";
//     list->next->next = malloc(sizeof(t_list));
//     list->next->next->data = "3";
//     list->next->next->next = NULL;
//     printf("%d\n", ft_list_size(list));
//     return (0);
// }
