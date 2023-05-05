#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A  pointer.
 *
 * Return: The converted outcome.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dv = 0;
	int x;

	if (!b)
	return (0);

	for (x = 0; b[x]; x++)
	{
	if (b[x] < '0' || b[x] > '1')
	return (0);

	dv = 2 * dv + (b[x] - '0');
	}

	return (dv);
}
