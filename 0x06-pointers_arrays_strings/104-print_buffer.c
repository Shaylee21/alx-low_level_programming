#include "main.h"
#include <stdio.h>
/**
 * print_line - prints a s bytes of a buffer
 * @a: buffer to print
 * @s: bytes of buffer to print
 * @l: line of buffer to print
 *
 * Return: void
 */

void print_line(char *a, int s, int l)
{
int j, n;
for (j = 0; j <= 9; j++)
{
if (j <= s)
printf("%02x", a[l * 10 + j]);
else
printf("  ");
if (j % 2)
putchar(' ');
}
for (n = 0; n <= s; n++)
{
if (a[l * 10 + n] > 31 && a[l * 10 + n] < 127)
putchar(a[l * 10 + n]);
else
putchar('.');
}
}

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
int i;
for (i = 0; i <= (size - 1) / 10 && size; i++)
{
printf("%08x: ", i * 10);
if (i < size / 10)
{
print_line(b, 9, i);
}
else
{
print_line(b, size % 10 - 1, i);
}
putchar('\n');
}
if (size == 0)
putchar('\n');
}
