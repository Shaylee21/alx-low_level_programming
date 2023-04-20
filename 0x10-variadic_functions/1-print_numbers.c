#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers
 * @separator: The string
 * @n: Number of integers
 *
 * Return: Void
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int x;

	va_start(num, n);

	for (x = 0; x < n; x++) {
		printf("%d" , va_arg(num, int));
		if (x != n - 1 && separator != NULL)
			printf("%s" , separator);
	}

	va_end(num);

	printf("\n");
}
