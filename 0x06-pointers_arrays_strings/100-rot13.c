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
	int i, j;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot_alpha[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; j < 52; j++)
	{
	if (s[i] == alpha[j])
	{
	rot13[i] = rot_alpha[j];
	break;
	}
	else
	{
		rot13[i] = s[i];
	}
	}
	}

	return (rot13);
}
