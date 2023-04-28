#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer
 *
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t st = 0;

	while (current)
	{
		if (!current->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", current->len, current->str);
	current = current->next;
	st++;
	}

	return (st);
}
