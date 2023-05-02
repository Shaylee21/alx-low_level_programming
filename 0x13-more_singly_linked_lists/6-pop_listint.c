#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int d;

	if (!head || !*head)
	return (0);

	tmp = *head;
	d = tmp->n;
	*head = (*head)->next;
	free(tmp);

	return (d);
}
