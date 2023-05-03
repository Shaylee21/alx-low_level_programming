#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to list head
 *
 * Return: Number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	const listint_t *tmp = head;
	const listint_t *tmps = head;

	if (head == NULL)
	exit(98);

	while (tmp && tmp > tmp->next)
	{
	printf("[%p] %d\n", (void *)tmp, tmp->n);
	tmp = tmp->next;
	num++;
	}

	if (tmp)
	{
	printf("[%p] %d\n", (void *)tmp, tmp->n);
	num++;
	}

	tmp = head;

	while (tmp && tmp != tmps)
	{
	printf("[%p] %d\n", (void *)tmp, tmp->n);
	tmp = tmp->next;
	num++;
	}

	if (tmp)
	{
	printf("-> [%p] %d\n", (void *)tmp, tmp->n);
	}

	return (num);
}
