#include "main.h"
#include <stdio.h>

/**
 * rot13 - Encodes a string using rot13
 * @str: The string to encode
 *
 * Return: A pointer to the encoded string
 */

char *rot13(char *str)
{
	char *s = str;
	char *rot13 = str;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
	{
	rot13[i] = s[i] + 13;
	}
	else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
	{
	rot13[i] = s[i] - 13;
	}
	}

	return (rot13);
}
