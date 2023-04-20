#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  returns the sum of all its parameters.
 * @n: The number
 * @...: A variable
 *
 * Return: sum
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ar;
	unsigned int x, sum = 0;

	va_start(ar, n);

	for (x = 0; x < n; x++)

	sum += va_arg(ar, int);

	va_end(ar);

	return (sum);
}
