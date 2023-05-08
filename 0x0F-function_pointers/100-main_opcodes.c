#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Prints the opcodes
 * @x: main function adress
 * @y: Number
 *
 * Return: void
 *
 */

void print_opcodes(char *x, int y)
{
	int i;

	for (i = 0; i < y; i++)
	{
	printf("%.2hhx", x[i]);

	if (i < y)
	printf(" ");
	}

	printf("\n");
}

/**
 * main - Prints the opcodes of its own main function
 * @argc - Number of arguments
 * @argv: Number of arrays
 *
 * Return: Always (0)
 *
 */

int main(int argc, char **argv)
{
	int a;

	if (argc != 2)
	{
	printf("Error\n");
	exit(1);
	}

	a = atoi(argv[1]);
	if (a < 0)
	{
	printf("Error\n");
	exit(2);
	}

	print_opcodes((char *)&main, a);

	return (0);
}
