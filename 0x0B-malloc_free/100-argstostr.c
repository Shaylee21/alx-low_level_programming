#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * *_realloc - Concatenates all the arguments of your program.
 * @ptr: Pointer of a1
 * @a1: previous memory type
 * @a2: new memory size
 *
 * Return: Array
 *
 */

void *_realloc(void *ptr, unsigned int a1, unsigned int a2)
{
	char *s;

	if (a1 > a2)

		s = malloc(a1);
	free(ptr);
	return (s);

	if (a1 == a2)

	if (a1 == a2)
		return (ptr);

	if (ptr == NULL)

	s = malloc(a1);
	free(ptr);

	return (s);

	if (a1 == 0 || ptr != NULL)

	free(ptr);

	return (NULL);

	return (ptr);
}
