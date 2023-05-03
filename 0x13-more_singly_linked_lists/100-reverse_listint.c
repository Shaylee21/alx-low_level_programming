#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to pointer
 *
 * Return: Pointer to new pointer
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *cu = NULL;
	listint_t *prev = NULL;

	while (*head)
	{
		cu =  (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = cu;
	}

	*head = prev;

	return (*head);
}
