#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - print the result of the multiplication
 * @argc: Number of argyments
 * @argv: Number of arrays
 *
 * Return: 0 on success and 1 otherwise
 *
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 1 && argc == 2){

		printf("Error\n");
			return (1);

	} else {
		b = 1;
	for (a = 1; a < 3; a++)
		b *= atoi(argv[a]);

	printf("%d\n", b);

	return (0);
	}
}
