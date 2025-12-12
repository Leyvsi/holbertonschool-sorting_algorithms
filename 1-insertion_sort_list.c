#include "sort.h"

void swap_nodes(listint_t **list, listint_t *left, listint_t *right)
{
if (left->prev)
left->prev->next = right;
else
*list = right;

if (right->next)
right->next->prev = left;

right->prev = left->prev;
left->next = right->next;
right->next = left;
left->prev = right;
}

void insertion_sort_list(listint_t **list)
{
listint_t *current;
listint_t *temp;

if (list == NULL || *list == NULL || (*list)->next == NULL)
return;

current = (*list)->next;

while (current)
{
temp = current->prev;

while (temp && current->n < temp->n)
{
swap_nodes(list, temp, current);
print_list(*list);
temp = current->prev;
}

current = current->next;
}
}
