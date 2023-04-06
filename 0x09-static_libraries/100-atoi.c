#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string into an integer.
 *
 * @s: The string to convert.
 *
 * Return: The integer value of a string.
 *
 */

int _atoi(char *s)
{
	int sign = 1, num = 0, digit;

	while (*s)
	{
	if (*s == '+' || *s == '-')
	{
	sign = (*s == '+') ? 1 : -1;
	}
	else if (*s >= '0' && *s <= '9')
	{
	digit = *s - '0';
	if (num > INT_MAX / 10 || (num == INT_MAX / 10 && digit > INT_MAX % 10))
	{

	return ((sign == 1) ? INT_MAX : INT_MIN);
	}
	num = num * 10 + digit;
	}
	else if (num > 0)
	{
	break;
	}
	s++;
	}

	return (sign * num);
}
