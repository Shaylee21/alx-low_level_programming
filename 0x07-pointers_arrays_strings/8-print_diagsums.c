#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagnols
 * of a square matrix of integers.
 * @a: Pointer to the square matrix of intergers.
 * @size: Size of the square matrix.
 *
 */

void print_diagsums(int *a, int size)
{
	int i, b, suma_1 = 0, suma_2 = 0, c, d = 0;

	c = size - 1;
	for (i = 0; i < size; i++)
	{
	for (b = 0; b < size; b++)
	{
	if (i == b)
	suma_1 += a[d];
	if (b == c)
	suma_2 += a[d];
	d++;
	}
	c--;
	}
	printf("%i, %i\n", suma_1, suma_2);
}
