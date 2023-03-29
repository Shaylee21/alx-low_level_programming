#include "main.h"

/**
 * *_strcat - Concatenates two strings
 * @dest: input value
 * @src: imput value
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	char *result = dest;
	char *temp_dest = dest;

	while (*temp_dest != '\0')
	{
	temp_dest++;
	}
	while (*src != '\0')
	{
	*temp_dest = *src;
	temp_dest++;
	src++;
	}

	*temp_dest = '\0';

	return (result);
}
