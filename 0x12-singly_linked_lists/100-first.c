#include <stdio.h>

void print_m(void) __attribute__ ((constructor));

/**
 * print_m - Prints a message
 */

void print_m(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
