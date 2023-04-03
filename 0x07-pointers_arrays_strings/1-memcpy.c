#include "main.h"

/**
 * _memcpy - copies from memory area
 * @dest: The address of memory to print
 * @src: Pointer to the source memory area
 * @n: number of bytes to copy
 *
 * Return:a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *ptr = dest;

	for (i = 0; i < n; i++)
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	return (dest);
}
