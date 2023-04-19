#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Addition operator
 * @a: first num
 * @b: second num
 *
 * Return: sum of the two numbers
 *
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtraction operator
 * @a: first num
 * @b: second num
 *
 * Return: The difference of a and b
 *
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of two numbers.
 * @a: first num
 * @b: second num
 *
 * Return: The product of a and b.
 *
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides the two numbers
 * @a: first number
 * @b: second number
 *
 * Return: Result of the division between the two numbers
 *
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of two numbers
 * @a: first numner
 * @b: second number
 *
 * Return: The remainder of the division of a by b.
 *
 */

int op_mod(int a, int b)
{
	return (a % b);
}
