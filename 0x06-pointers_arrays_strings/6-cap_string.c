#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: The capitalized string.
 */

char *cap_string(char *str)
{
	int i = 0;
	int should_capitalize = 1;

	while (str[i])
	{
	if (should_capitalize && (str[i] >= 'a' && str[i] <= 'z'))
		str[i] -= 32;

	should_capitalize = (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == ',' || str[i] == ';' || str[i] == '.'
			|| str[i] == '!' || str[i] == '?' || str[i] == '"'
			|| str[i] == '(' || str[i] == ')' || str[i] == '{'
			|| str[i] == '}');
	i++;
	}

	return (str);
}
