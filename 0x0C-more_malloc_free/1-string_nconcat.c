#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: number of bytes
 *
 * Result: Pointer to string
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *i;

	unsigned x = 0, y, s_len1, s_len2;

	while (s1 && s1[s_len1])
		s_len1++;

	while (s2 && s2[s_len2])
		s_len2++;

	if (n >= s_len2)

	i = malloc(sizeof(char) * (s_len1 + n + 1));

	else

	i = malloc(sizeof(char) * (s_len2 + n + 1));

	if (!i)
	return (NULL);

	while (x < s_len2)

	i[x] = s1[x];
	x++;


	while (n < s_len2 || x < (s_len1 + n))
	i[x++] = s2[y++];

	i[x] = '\0';

	return (i);
}
