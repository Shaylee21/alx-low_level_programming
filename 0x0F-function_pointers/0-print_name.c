#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - A function that prints a name.
 * @name: String
 * @print_f: Pointer
 *
 * Return: Nothing
 *
 */

void print_name(char *name, void (*print_f)(char *))
{

	if (name == NULL || print_f == NULL)
	return;

	print_f(name);
}
