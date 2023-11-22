#include "lists.h"

/**
 * print_listint - displays each element in the linked list
 * @h: head node of type listint_t for display
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		node_count++;
		h = h->next;
	}

	return (node_count);
}
