#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars,
 * and initializes it with a specific char.
 * @size: The sie of array to create
 * @c: Char to assign
 *
 * Return: Pointer to array, NULL if fail.
 *
 */

char *create_array(unsigned int size, char c)
{
	char *arr;

	unsigned int x;

	arr = malloc(sizeof(char) * size);

	if (size == 0 || arr == NULL)

		return (NULL);

	for (x = 0; x < size; x++)
		arr[x] = c;

	return (arr);
}
