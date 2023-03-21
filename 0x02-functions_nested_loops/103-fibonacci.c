#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued
 * terms in Fibonacci seqeunce
 * whose value does not exceed  4,000,000
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int sum = 0, a = 1, b = 2, c;

	while (b <= 4000000)
	{
	if (b % 2 == 0)
	sum += b;
	c = a + b;
	a = b;
	b = c;
	}

	printf("%ld\n", sum);

	return (0);
}
