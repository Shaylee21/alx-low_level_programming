#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be duplicated.
 *
 * Return: Pointer to the memory area s
 *
 */

char *_strdup(char *str)
{
	char *a_str;
	unsigned int x, a;

	if (str == NULL)

	return (NULL);

	x = 0;
	while (str[x] != '\0')
		x++;

	a_str = malloc(sizeof(char) * (x + 1));

	if (a_str == NULL)

	return (NULL);

	for (a = 0; a <= x; a++)
	a_str[a] = str[a];

	return (a_str);
}
