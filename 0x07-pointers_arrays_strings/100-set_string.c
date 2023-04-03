#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Double pointer to thr string to be set.
 * @to: Pointer to the string to set the pointer to.
 *
 */

void set_string(char **s, char *to)
{
	*s = to;
}
