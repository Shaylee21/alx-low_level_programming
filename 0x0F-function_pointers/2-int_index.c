#include "function_pointers.h"

/**
 * int_index - Returns index
 * @arr: An array
 * @s: The size of array
 * @cmp: Pointer
 *
 * Return: 0
 *
 */

int int_index(int *arr, int s, int (*cmp)(int))
{
	int x;

	if (arr == NULL || s <= 0 || cmp == NULL)

		return (-1);

	for (x = 0; x < s; x++)

	if (cmp(arr[x]))
		return (x);

	return (-1);
}
