#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees the malloc pointer
 * @grid: the array
 * @height: height of the array
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
