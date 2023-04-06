#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: Pointer to first string.
 * @s2: Pointer to second string.
 *
 * Return: Integer value representing the difference between the strings.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
