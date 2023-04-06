#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 * @n: maximum number of character to copy
 *
 * Return: Pointer to the destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	dest[j] = src[j];
	for ( ; j < n; j++)
	dest[j] = '\0';

	return (dest);
}
