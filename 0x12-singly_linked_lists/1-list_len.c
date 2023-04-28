#include "lists.h"
#include <stdlib.h>

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: A pointer
 *
 * Return: The number of elements
 */

size_t list_len(const list_t *h)
{
	const list_t *c = h;

	size_t st = 0;

	while (c != NULL)
	{
		st++;
		c = c->next;
	}

	return (st);
}
