#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A  pointer.
 *
 * Return: The converted outcome.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;
	int y;

	if (b == NULL)
	return (0);

	for (y = 0; b[y]; y++)
	{
		if (b[y] < '0' || b[y] > '1')
		return (0);

		x = 2 * x + (b[y] - '0');
	}

	return (x);
}
