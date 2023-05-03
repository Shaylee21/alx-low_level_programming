#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at
 * index of a listint_t linked list.
 * @head: Pointer to a pointer
 * @index: index of location needs to be deleted.
 *
 * Return: 1 on succeeded, -1 on faliure.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *prev;
	unsigned int x = 0;

	if (!head || !(*head))
	return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (x < index - 1)
	{
		if (!tmp || !(tmp->next))
		return (-1);

		tmp = tmp->next;
		x++;
	}

	prev = tmp->next;
	tmp->next = prev->next;
	free(prev);

	return (1);
}
