#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbes
 *
 * Return: 0 on success
 */

int main(void)
{
	int count = 0;
	long int a = 1, b = 2, c;

	printf("%ld, %ld", a, b);

	for (count = 2; count < 50; count++)
	{
		c = a + b;
		printf(", %ld", c);
		a = b;
		b = c;
	}

	printf("\n");

	return (0);
}
