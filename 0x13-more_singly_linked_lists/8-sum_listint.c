#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: Pointer to head of list.
 *
 * Return: Result sum.
 */

int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *cu = head;

	while (cu)
	{
	s += cu->n;
		cu = cu->next;
	}

	return (s);
}
