#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to head of list.
 * @index: Index of node to return.
 *
 * Return: Pointer to the node aquired.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;
	listint_t *cu = head;

	while (cu && x < index)
	{
		cu = cu->next;
		x++;
	}

	return ((x == index) ? cu : NULL);
}
