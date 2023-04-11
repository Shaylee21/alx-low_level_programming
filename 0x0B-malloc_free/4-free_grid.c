#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - Frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 * @grid: 2D array
 * @height: Height of the 2D array
 *
 * Return: NULL
 *
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)

		free(grid[a]);

	free(grid);
}
