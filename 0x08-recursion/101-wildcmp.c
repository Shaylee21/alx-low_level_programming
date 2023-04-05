#include "main.h"

/**
 * wildcmp - Compares strings
 *
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return: On success 1.
 *
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0' && *s1 == '\0')
		return (1);

	if (*s2 == *s1)
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*')

	{
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);

	if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
		return (1);
	}

	return (0);
}
