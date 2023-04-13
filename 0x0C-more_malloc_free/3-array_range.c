#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 * @min: minimum value
 * @max: maximum value
 *
 * Return: Pointer to new array.
 *
 */

int *array_range(int min, int max)
{
	int *pta;
	int x, size;

	if (min > max)

	return (NULL);

	size = max - min + 1;

	pta = malloc(sizeof(int) * size);

	if (pta == NULL)

	return (NULL);

	for (x = 0; x < size; x++)

	pta[x] = min + x;

	return (pta);
}
