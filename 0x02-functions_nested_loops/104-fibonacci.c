#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: ALways 0 (Success)
 */

int main(void)
{
	int i;
	unsigned int a = 1, b = 2, c;

	printf("%u,%u", a, b);

	for (i = 3; i <= 98; i++)
	{
		c = a + b;
		printf(", %u", c);
		a = b;
		b = c;
	}

	printf("\n");

	return (0);
}
