#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: The string to search.
 * @c: The character to locate.
 *
 * Return: Located string.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	return (s);
	s++;
	}

	if (c == '\0')
		return (s);

	return ('\0');
}