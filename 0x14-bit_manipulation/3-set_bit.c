#include "main.h"

/**
 * set_bit - Sets the valuce of a bit at a given index to 1
 * @n: Pointer
 * @index: Index of bit.
 *
 * Return: 1 on succes, -1 on failure.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int id = index;

	if (id > 63)
	return (-1);

	*n |= 1UL << id;
	return (1);
}
