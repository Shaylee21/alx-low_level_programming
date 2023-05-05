#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to print
 *
 */
void print_binary(unsigned long int n)
{
	int x, c = 0;
	unsigned long int cu;

	for (x = 63; x >= 0; x--)
	{
		cu = n >> x;

		if (cu & 1)
		{
		_putchar('1');
		c++;
		}
		else if (c)
		_putchar('0');
	}
	if (!c)
	_putchar('0');
}
