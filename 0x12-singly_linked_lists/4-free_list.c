#include "lists.h"
#include <stdlib.h>

/**
 * free_list -  frees a list_t list.
 * @head: A pointer to pointer
 *
 */

void free_list(list_t *head)
{
	list_t *ls;

	while (head)
	{
	ls = head->next;
	free(head->str);
	free(head);
	head = ls;
	}
}
