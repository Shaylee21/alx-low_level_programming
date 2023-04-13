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
	char *result;

	unsigned int x = 0, y = 0, s_len1 = 0, s_len2 = 0;

	while (s1 && s1[s_len1])
		s_len1++;

	while (s2 && s2[s_len2])
		s_len2++;

	if (n >= s_len2)

	result = malloc(sizeof(char) * (s_len1 + n + 1));

	else

	result = malloc(sizeof(char) * (s_len2 + n + 1));

	if (!result)
	return (NULL);

	while (x < s_len2)

	result[x] = s1[x];
	x++;


	while (n < s_len2 || x < (s_len1 + n))
	result[x++] = s2[y++];
	result[x] = '\0';

	return (result);
}
