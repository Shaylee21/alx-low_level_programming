#include "variadic_functions.h"
	#include <stdio.h>
	#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 */

void print_all(const char * const format, ...)
{
	int x = 0;
	char *str, *sepo = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", sepo, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sepo, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sepo, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sepo, str);
					break;
				default:
					x++;
					continue;
			}
			sepo = ", ";
			x++;
		}
	}

	printf("\n");
	va_end(list);
}
