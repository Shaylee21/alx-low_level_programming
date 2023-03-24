#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	long num = 612852475143;
	double square = sqrt(num);
	long y, m;

	for (y = 1; y <= square; y++)
	{
	if (num % y == 0)
	{
	m = num / y;
	}
	}
	printf("%ld\n", m);

	return (0);
}
