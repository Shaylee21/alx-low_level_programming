#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: Pointer to head of list
 *
 * Return: Size of the list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	int x;
	listint_t *next;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		x = *h - (*h)->next;
		if (x >= 0)
		{
			next = (*h)->next;
			free(*h);
			*h = next;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}

	*h = NULL;

	return (count);
}
