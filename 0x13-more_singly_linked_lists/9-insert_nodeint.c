#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to a pointer.
 * @idx: Index where node should be added.
 * @n: Info to insert.
 *
 * Return: location of new node, NULL on failure.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_n;
	listint_t *last_n;
	unsigned int x = 0;

	new_n = malloc(sizeof(listint_t));

	if (!new_n)
	return (NULL);

	new_n->n = n;
	new_n->next = NULL;

	if (idx == 0)
	{
		new_n->next = *head;
		*head = new_n;

		return (new_n);
	}

	last_n = *head;
	while (last_n && x < idx - 1)
	{
		last_n = last_n->next;
		x++;
	}

	if (last_n)
	{
		new_n->next = last_n->next;
		last_n->next = new_n;
		return (new_n);
	}
	else
	{
		free(new_n);
		return (NULL);
	}
}
