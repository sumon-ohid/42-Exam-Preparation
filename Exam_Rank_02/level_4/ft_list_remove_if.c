#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*current;
	t_list	*prev;

	current = *begin_list;
	prev = NULL;
	while (current != NULL)
	{
		if (cmp(current->data, data_ref) == 0)
		{
			if (prev == NULL)
			{
				*begin_list = current->next;
				free(current);
				current = *begin_list;
			}
			else
			{
				prev->next = current->next;
				free(current);
				current = prev->next;
			}
		}
		else
		{
			prev = current;
			current = current->next;
		}
	}
}

void	print_list(t_list *begin_list)
{
	t_list	*current;

	current = begin_list;
	while (current != NULL)
	{
		printf("%s\n", (char *)current->data);
		current = current->next;
	}
}

int	main(void)
{
	char	straa[] = "String aa";
	t_list	*aa;
	char	strbb[] = "String bb";
	t_list	*bb;
	char	strcc[] = "String cc";
	t_list	*cc;
	char	strdd[] = "String dd";
	t_list	*dd;
	t_list	*begin_list;
	t_list	*temp;

	aa = malloc(sizeof(t_list));
	aa->next = NULL;
	aa->data = straa;
	bb = malloc(sizeof(t_list));
	bb->next = NULL;
	bb->data = strbb;
	cc = malloc(sizeof(t_list));
	cc->next = NULL;
	cc->data = strcc;
	dd = malloc(sizeof(t_list));
	dd->next = NULL;
	dd->data = strdd;
	aa->next = bb;
	bb->next = cc;
	cc->next = dd;
	begin_list = aa;
	printf("Original list:\n");
	print_list(begin_list);
	printf("----------\n");
	ft_list_remove_if(&begin_list, straa, strcmp);
	printf("List after removing 'String aa':\n");
	print_list(begin_list);
	// Free the remaining nodes
	while (begin_list != NULL)
	{
		temp = begin_list;
		begin_list = begin_list->next;
		free(temp);
	}
	return (0);
}
