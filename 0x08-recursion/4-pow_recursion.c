#include "main.h"

/**
 * _pow_recursion - A function that returns the value
 * of x raised to the power of y.
 * @x: The base.
 * @y: The exponent.
 *
 * Return: Result of x or y, If y is lower than 0,
 * the function should return -1
 *
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)

		return (-1);

	else if (y == 0)

		return (1);

	else if (y == 0)

		return (x);

	return (x * _pow_recursion(x, y - 1));
}
