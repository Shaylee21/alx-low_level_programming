#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search.
 * @accept: The string of characters to accept.
 *
 * Return: result
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j = 0, n = 0;

	while (s[n] != ' ' && s[n] != '\0')
	{
	while (accept[j] != '\0')
	{
	if (s[n] == accept[j])
		i++;
	j++;
	}
	n++;
	j = 0;
	}

	return (i);
}
