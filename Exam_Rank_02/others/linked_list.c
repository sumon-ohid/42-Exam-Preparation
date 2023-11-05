#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
    struct s_list *next;
    void *data;
} t_list;

int main(void)
{
    t_list *head = NULL;

    t_list *node1 = (t_list *)malloc (sizeof(t_list));
    node1->data = "Data 1";
    node1->next = NULL;
    head = node1;

    t_list *node2 = (t_list *)malloc(sizeof(t_list));
    node2->data = "Data 2";
    node2->next = NULL;
    node1->next = node2;

    t_list *node3 = (t_list *)malloc(sizeof(t_list));
    node3->data = "Data 3";
    node3->next = NULL;
    node2->next = node3;

    t_list *current = head;
    while (current != NULL)
    {
        printf("%s\n", (char *)current->data);
        current = current->next;
    }

    current = head;
    while (current != NULL)
    {
        t_list *temp = current;
        current = current->next;
        free (temp);
    }
    return (0);
}