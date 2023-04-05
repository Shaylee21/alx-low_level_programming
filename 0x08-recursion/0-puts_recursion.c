#include "main.h"

/**
 * puts_recursion - A function that prints a string, followed by a new line
 * @s: The string to be printed.
 *
 * Return: Void.
 */

void _puts_recursion(char *s)
{
	{
	if (*s == '\0')
	{
		_putchar('\n');
		return('\0');
	}
	_putchar(*s);
	_puts_recursion(s + 1);
	}
}
