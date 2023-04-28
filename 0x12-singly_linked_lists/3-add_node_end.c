#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A pointer to pointer.
 * @str: a new string.
 *
 * Return: Address of new node, NULL on failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	unsigned int x = 0;
	list_t *ls = *head;

	const char *s = str;

	while (s[x])
		x++;
	{
		n = malloc(sizeof(list_t));
		if (!n)
			return (NULL);
	}

	n->str = strdup(str);
	n->len = x;
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}

	while (ls->next)
		ls = ls->next;

	ls->next = n;

	return (n);
}
