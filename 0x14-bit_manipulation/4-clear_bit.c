#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to number.
 *
 * Return: 1 on success, -1 on failure.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int id = index;

	if (id > 63)
	return (-1);

	*n &= ~(1 << id);
	return (1);
}
