#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: Pointer to head of list.
 *
 *
 * Return: Void.
 */

void free_listint2(listint_t **head)
{
	listint_t *cu;

	while (*head != NULL)
	{
	cu = (*head)->next;
	free(*head);
	*head = cu;
	}

	*head = NULL;
}
