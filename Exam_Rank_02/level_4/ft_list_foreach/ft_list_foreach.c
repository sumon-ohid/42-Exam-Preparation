/* Assignment name  : ft_list_foreach
Expected files   : ft_list_foreach.c, ft_list.h
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a list and a function pointer, and applies this
function to each element of the list.

It must be declared as follows:

void				ft_list_foreach(t_list *begin_list, void (*f)(void *));

The function pointed to by f will be used as follows:

(*f)(list_ptr->data);

You must use the following structure, and turn it in as a file called
ft_list.h:

typedef struct    s_list
{
	struct s_list	*next;
	void			*data;
}                 t_list; */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *list_ptr;

    list_ptr = begin_list;
    while (list_ptr)
    {
        (*f)(list_ptr->data);
        list_ptr = list_ptr->next;
    }
}

void print_int(void *data)
{
    int *num = (int *)data;
    printf("%d\n", *num);
}

int main()
{
    t_list *list = NULL;
    for (int i = 1; i <= 5; i++)
    {
        int *num = (int *)malloc(sizeof(int));
        *num = i;
        t_list *new_node = (t_list *)malloc(sizeof(t_list));
        new_node->data = num;
        new_node->next = list;
        list = new_node;
    }
    ft_list_foreach(list, print_int);
    while (list)
    {
        t_list *temp = list;
        list = list->next;
        free(temp->data);
        free(temp);
    }
    return 0;
}