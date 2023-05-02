#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: Pointer to head of list
 *
 * Return: Void.
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
	tmp = head->next;
	free(head);
	head = tmp;
	}
}
