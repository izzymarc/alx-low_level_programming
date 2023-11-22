#include "lists.h"

/**
 * listint_len - calculates the total number of nodes in the linked list
 * @h: head of the listint_t type linked list for traversal
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t node_total = 0;

	while (h)
	{
		node_total++;
		h = h->next;
	}

	return (node_total);
}
