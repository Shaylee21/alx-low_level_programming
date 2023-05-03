#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: Pointer to list head
 *
 * Return: node address
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *s;
	listint_t *f;

	s = f = head;

	if (!head)
		return (NULL);

	while (s && f && f->next)
	{
		f = f->next->next;
		s = s->next;

		if (s == f)
		{
			s = head;
			while (s != f)
			{
				s = s->next;
				f = f->next;
			}
			return (f);
		}
	}
	return (NULL);
}
