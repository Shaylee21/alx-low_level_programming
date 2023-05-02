#include "lists.h"
#include <stddef.h>

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Pointer to head of list.
 * @n: data to add to the new node.
 *
 * Return: New address of node, NULL on failure.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_n;

	new_n = malloc(sizeof(listint_t));

	if (new_n == NULL)
	return (NULL);

	new_n->n = n;
	new_n->next = *head;
	*head = new_n;

	return (new_n);
}
