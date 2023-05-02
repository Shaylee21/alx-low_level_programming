#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: Pointer to head of list.
 *
 * Return: The number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t x = 0;
	const listint_t *hl = h;

	while (hl)
	{
		x++;
	hl = hl->next;
	}

	return (x);
}
