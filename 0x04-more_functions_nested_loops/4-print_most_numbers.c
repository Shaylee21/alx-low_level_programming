#include "main.h"

/**
 * print_most_numbers - prints the numbers since 0 up to 9
 * Description - prints the numbers excluding 2 and 4
 * Return: the numbers 0 up to 9
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	if (i != 2 && i != 4)
	{
	_putchar('0' + i);
	}
	}
	_putchar('\n');
}
