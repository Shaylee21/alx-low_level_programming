#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 *
 * Return: .
 */

void jack_bauer(void)
{
	int m, h, s, n;

	for (m = 0; m <= 2; m++)
	{
	for (h = 0; h <= 9; h++)
	{
	if ((m <= 1 && h <= 9) || (m <= 2 && h <= 3))
	{
	for (s = 0; s <= 5; s++)
	{
	for (n = 0; n <= 9; n++)
	{
	_putchar(m + '0');
	_putchar(h + '0');
	_putchar(58);
	_putchar(s + '0');
	_putchar(n + '0');
	_putchar('\n');
	}
	}
	}
	}
	}
}

