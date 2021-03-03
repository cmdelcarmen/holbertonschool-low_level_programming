#include "holberton.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * alloc_grid - function returns a pointer to a 2d array of interegers
 * @width: width of square
 * @height: height of square
 * Return: NULL or pointer
 */
int **alloc_grid(int width, int height)
{
	int count, count2;
	int **pointerSquare;

	if (width < 1)
		return (NULL);

	if (height < 1)
		return (NULL);

	pointerSquare = malloc(sizeof(int *) * height);

	if (pointerSquare == NULL)
	{
		free(pointSquare);
		return (NULL);
	}

	for (count = 0; count < height; count++)
	{
		pointerSquare[count] = malloc(sizeof(int) * (width));
		if (pointerSquare == NULL)
		{
			for (count = count; count >= 0; count--)
			{
				free(pointerSquare[count]);
			}
			free(pointerSquare);
			return (NULL);
		}
	}
	if (pointerSquare == NULL)
		return (NULL);

	for (count = 0; count < height; count++)
	{
		for (count2 = 0; count2 < width; count2++)
			pointerSquare[count][count2] = 0;
	}
	return (pointerSquare);
}
