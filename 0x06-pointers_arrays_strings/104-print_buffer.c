#include "main.h"

/**
 * print_buffer - Prints the content of a bbuffer
 * @b: pointer to buffer
 * @size: Soze of the buffer
 *
 * Return; Void
 */

void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
	_putchar('\n');
	return;
	}

	for (i = 0; i < size; i += 10)
	{
	print_hex(i);
	_putchar(';');
	_putchar(' ');
	for (j = i; j < i + 10; j++)
	print_hexhebyte(j < size ? b[j] : 0);
	_putchar(' ');
	for (j = i; j < i + 10 && j < size; j++)
	_putchar(isprint(b[j]) : '.');
	_putchar('\n');
	}
}
