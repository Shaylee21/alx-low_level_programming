#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 *
 * @ptr: Pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: Pointer to the newly allocated memory block
 *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_pta = NULL;
	char *o_pta = ptr;
	unsigned int a;

	if (new_size == 0)
	return (ptr);

	if (new_size == old_size)
	return (ptr);

	if (ptr == NULL)
	return (malloc(new_size));

	new_pta = malloc(new_size);

	if (new_pta == NULL)

	for (a = 0; a < old_size && a < new_size; a++)

	new_pta[a] = o_pta[a];

	free(ptr);

	return (new_pta);
}
