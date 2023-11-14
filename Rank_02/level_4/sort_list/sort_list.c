#include <stdlib.h>
#include <stdio.h>

// typedef struct s_list
// {
//     struct s_list *next;
//     int            data;
// }               t_list;


t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    int swap;
    t_list *temp;

    temp = lst;
    while (lst->next != NULL)
    {
        if ((*cmp)(lst->data, lst->next->data) == 0)
        {
            swap = lst->data;
            lst->data = lst->next->data;
            lst->next->data = swap;
            lst = temp;
        }
        else
            lst = lst->next;
    }
    lst = temp;
    return (lst);
}

// int ascending(int a, int b)
// {
// 	return (a <= b);
// }

// int main (void)
// {
//     t_list *list = (t_list *)malloc(sizeof(t_list));
//     list->data = 3;
//     list->next = (t_list *)malloc(sizeof(t_list));
//     list->next->data = 1;
//     list->next->next = (t_list *)malloc(sizeof(t_list));
//     list->next->next->data = 4;
//     list->next->next->next = NULL;

//     list = sort_list(list, ascending);
//     t_list *current = list;
//     while (current != NULL)
//     {
//         printf("%d ", current->data);
//         current = current->next;
//     }
//     printf("\n");

//     current = list;
//     while (current != NULL) {
//         t_list* temp = current;
//         current = current->next;
//         free(temp);
//     }
//     return (0);
// }