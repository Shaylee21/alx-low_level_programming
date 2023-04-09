#include <stdio.h>
#include "main.h"

/**
 * main - A  program that prints the number of arguments passed into it.
 * @argc: Number of arguments
 * @argv: Number of arrays
 *
 * Return: Always 0 (success)
 *
 */

int main(int argc, char *argv[])
{
	int num_arugs = argc - 1;
	(void) argv; /*ignore argv*/

	printf("%d\n", num_arugs);

	return (0);
}
