#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>
#include <stdlib.h>

void print_name(char *name, void (*print_f)(char *));
int _putchar(char c);
void array_iterator(int *arr, size_t s, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
