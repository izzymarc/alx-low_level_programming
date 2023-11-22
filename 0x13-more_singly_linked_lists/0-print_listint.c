#include "lists.h"

/**
 * display_linked_list - displays each element in the linked list
 * @list_head: head node of type listint_t for display
 *
 * Return: number of nodes
 */
size_t display_linked_list(const listint_t *list_head)
{
	size_t node_count = 0;

	while (list_head)
	{
		printf("%d\n", list_head->n);
		node_count++;
		list_head = list_head->next;
	}

	return (node_count);
}
