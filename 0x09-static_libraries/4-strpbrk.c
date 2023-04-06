#include "main.h"

/**
 * _strpbrk - The string to search.
 * @s: The string to search.
 * @accept: the set of bytes to search.
 *
 * Return: Result.
 */

char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s != '\0')
	{
	for (p = accept; *p != '\0'; p++)
	{
	if (*s == *p)
	{
	return (s);
	}
	}
	s++;
	}

	return ('\0');
}
