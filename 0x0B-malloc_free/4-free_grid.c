#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - main
 * @grid: grid
 * @height: height
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;
	for (i = 0; i < height && grid[i] != NULL; i++)
		free(grid[i]);
	free(grid);
}
