#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - function frees a 2 dimensional grid
 * @grid: pointer passed
 * @height: int passed
 */
void free_grid(int **grid, int height)
{
	int count;

	for (count = 0; count < height; count++)
	{
		free(grid[count]);
	}

	free(grid);
}
