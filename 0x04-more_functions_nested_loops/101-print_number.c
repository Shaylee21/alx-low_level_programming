#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: the integer to print
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int n1 = n;

	if (n < 0)
	{
	n *= -1;
	n1 = n;
	_putchar('-');
	}
	n1 /= 10;
	if (n1 != 0)
	print_number(n1);
	_putchar((unsigned int) n % 10 + '0');
}
