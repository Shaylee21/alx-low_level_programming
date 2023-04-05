#include "main.h"

/**
 * evaluate_num - sees if a number is a prime number
 * @iterator: number to iterate.
 * @num: Number
 *
 * Return: if n is prime 1, otherwise 0.
 */

int evaluate_num(int num, int iterator)
{
	if (iterator == num - 1)

 		return (1);

	else if (num % iterator == 0)

		return (0);

	if (num % iterator != 0)

		return (evaluate_num(num, iterator + 1));

	return (0);
}
