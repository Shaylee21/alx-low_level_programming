#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 * @width: width input
 * @height: height input
 *
 * Return: Pointer to the 2D array, or NULL otherwise.
 *
 */

int **alloc_grid(int width, int height)
{
	int **alg;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	alg = malloc(sizeof(int *) * height);

	if (alg == NULL)
	return (NULL);

	for (a = 0; a < height; a++)
	{
		alg[a] = malloc(sizeof(int) * width);

	if (alg[a] == NULL)
	{
		for (; a >= 0; a--)
		free(alg[a]);

	free(alg);
	}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		alg[a][b] = 0;
	}

	return (alg);
}
