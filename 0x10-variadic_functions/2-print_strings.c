#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings
 * @separator: The string
 * @n: The number of strings
 * @...: A variable
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	char *s;
	unsigned int x;

	va_start(str, n);

	for (x = 0; x < n; x++) {

	s = va_arg(str, char *);

	if (s == NULL)
		printf("(nil)");

	else
		printf("%s", s);

	if (x != (n - 1) && separator != NULL)
		printf("%s", separator);
	}

	printf("\n");

	va_end(str);
}
