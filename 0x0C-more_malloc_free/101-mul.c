#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void _print_result(int *res, int s1);
int _isdigit(char *s);
int _putchar(char c);
void _print_number(char *s);

/**
 * main - Multiplies two positive numbers.
 *
 * @argc: Number of arguments
 * @argv: Number of arrays
 *
 * Return: 0 on  success
 */

int main(int argc, char **argv)
{
	int a, b, l1, l2, next. d1, d2, pr;
	int *result;

	if (argc != 3 || !_isdigit(argv[2]) || !_isdigit(argv[1]))
