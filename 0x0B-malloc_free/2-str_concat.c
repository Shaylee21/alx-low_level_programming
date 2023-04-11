#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Concat of s1 and s2
 *
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int a1 = 0, a2 = 0, x, x2;

	char *concat;

	if (s1 == NULL)

	s1 = "";

	if (s2 == NULL)

	s2 = "";

	while (s1[a1] != '\0')
		a1++;
	while (s2[a2] != '\0')
		a2++;

	concat = malloc(sizeof(char) * (a1 + a2 + 1));

	if (concat == NULL)
		return (NULL);

	for (x = 0; x < a1; x++)

		concat[x] = s1[x];
	for (x2 = 0; x2 < a2; x2++)

		concat[x + x2] = s2[x2];

	concat[x + x2] = '\0';

	return (concat);
}
