#include "function_pointers.h"
#include <stdio.h>
#include "3-calc.h"
#include <stdio.h>

/**
 * main - Prints the result of the operation
 * @argc: Number of arguments
 * @argv: Number of arrays
 *
 * Return: Always 0
 *
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char *o;
	int a, b;

	if (argc != 4)

	printf("Error\n");
	exit(98);

	a = atoi(argv[1]);
	o = argv[2];
	b = atoi(argv[3]);

	if (get_op_func(o) == NULL || o[1] != '\0')

	printf("Error\n");
	exit(99);

	if ((*o == '/' && b == 0) ||
		(*o == '%' && b == 0))

	printf("Error\n");
	exit(100);

	printf("%d\n", get_op_func(o)(a, b));

	return (0);
}
