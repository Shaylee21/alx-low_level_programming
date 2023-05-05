#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: 0 for large, 1 for small
 */

int get_endianness(void)
{
	unsigned int x = 1;

	char *c = (char *) &x;

	return (*c);
}
