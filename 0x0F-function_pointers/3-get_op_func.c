#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - Selects the correct function
 * @st: The operator passed as argument
 *
 * Return: A pointer to the function corresponding
 *
 */

int (*get_op_func(char *st))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}

	};

	int i;

	i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *st)

		i++;

	return (ops[i].f);
}
