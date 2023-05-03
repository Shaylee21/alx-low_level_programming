#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to the list head.
 *
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t x = 0;
	const listint_t *hl = h;

	while (hl != NULL)
	{
		printf("%d\n", hl->n);
		hl = hl->next;
		x++;
	}

	return (x);
}
