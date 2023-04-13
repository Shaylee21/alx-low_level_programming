#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of nmemb elements of size bytes
 * each and returns a pointer to the allocated memory.
 * @nmemb: Number of elements in array.
 * @size: Element size
 *
 * Return: Pointer to memory.
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a;
	char *pta;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	pta = malloc(nmemb * size);

	if (pta == NULL)
	{
		exit(1);
	}

	for (a = 0; a < nmemb * size; a++)
	{
		*(pta + a) = 0;
	}

	return ((void *)pta);
}
