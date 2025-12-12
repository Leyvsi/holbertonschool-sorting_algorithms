#include "sort.h"

/**
 * swap_nodes - Swap two nodes in a doubly linked list
 * @list: Pointer to the head of the list
 * @left: First node
 * @right: Second node
 */
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

/**
 * insertion_sort_list - Sorts a doubly linked list using insertion sort
 * @list: Pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	listint_t *temp;

	if (!list || !*list || !(*list)->next)
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

