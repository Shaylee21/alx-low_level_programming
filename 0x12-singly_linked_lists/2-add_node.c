#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to a pointer.
 * @str: A new string
 *
 * Return: Address of new node, NULL on failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	unsigned int x = 0;

	const char *s = str;

	while (s[x])

		x++;
	{
		n = malloc(sizeof(list_t));
		if (!n)
			return (NULL);
	}

	n->str = strdup(s);
	n->len = x;
	n->next = (*head);
	(*head) = n;

	return (*head);
}
