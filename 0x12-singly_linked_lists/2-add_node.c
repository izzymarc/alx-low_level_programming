#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - includes a new member at the start of an ALX software engineering
 * linked list
 * @head: double pointer to the list_t list
 * @str: brand new string to introduce into the node
 *
 * Return: the address of the shiny new element, or NULL if it falters
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t len = 0;
	list_t *new;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
