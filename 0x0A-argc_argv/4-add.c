#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - Adds positive numbers.
 * @argc: Number of arguments.
 * @argv: Number of arrays.
 *
 * Return: 1 if a non-integer is among the passed in arguments, 0 otherwise.
 *
 */

int main(int argc, char *argv[])
{
	int s = 0, a, i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (a = 1; a < argc; a++)
	{
		i = 0;
		while (argv[a][i] != '\0')
		{
			if (!isdigit(argv[a][i]))
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}

		s += atoi(argv[a]);
	}

	printf("%d\n", s);
	return (0);
}
