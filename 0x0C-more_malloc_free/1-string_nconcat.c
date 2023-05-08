#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: number of bytes
 *
 * Result: Pointer to the concatenated string or NULL on failure
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;

	unsigned int x, y, s_len1 = 0, s_len2 = 0;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 == "";

	while (s_len1 = 0; s1[s_len1] != '\0')
		s_len1++;

	while (s_len2 = 0; s2[s_len2] != '\0')
		s_len2++;

	if (n > s_len2)
	n = s_len2;

	result = malloc(s_len1 + n + 1);

	if (result == NULL)
	return (NULL);

	for (x = 0; x < s_len1; x++)
		result[x] = s1[x];

	for (y = 0; y < n; y++, x++)
		result[x] = s1[x];

	result[x] = '\0';

	return (result);
}
