#include "holberton.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_grid - write a function that frees a 2d array
 * @grid: width of square
 * @height: height of square
 * Return: NULL or pointer
 */
void free_grid(int **grid, int height)
{
	int count;

	for (cout = 0; count < height; height++)
	{
		free(grid[count]);
	}
	free(grid);
}
