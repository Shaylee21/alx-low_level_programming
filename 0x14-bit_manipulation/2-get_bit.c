#include "main.h"

/**
 * get_bit - Rturns the value of a bit at a given index
 * @n: The number to look for
 * @index: index of the bit.
 *
 * Return: The value of the bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int id = index;

	if (id >= (sizeof(unsigned long int) * 8))
	return (-1);

	return ((n >> id) & 1);
}
