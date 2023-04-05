#include "main.h"

/**
 * _evaluate - evaluate function sqrt.
 * @n: An integer
 * @j: An integer
 *
 * Return: result.
 *
 */

int _evaluate(int j, int n)
{
	if (n == 0 || n == 1)

		return (n);

	else if (j * j < n)

		return (_evaluate(j + 1, n));

	else if (j * j == n)

		return (j);

	return (-1);

	return (-1);
}
