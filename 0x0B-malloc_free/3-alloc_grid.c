#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * alloc_grid - main function
 * @width: obv
 * @height: obv
 * Return: int
 */

int **alloc_grid(int width, int height)
{
	int **grid = malloc(height * sizeof(int *));
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);

}
