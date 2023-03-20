#include "main.h"
#include <unistd.h>
/**
 * putchar - writes the character c to stdout
 * @c: The character to print 
 *
 * Return: on success 1.
 * on error, -1 is returned, and error is set appropriatley.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
