#include <stdlib.h>
#include "holberton.h"
/**
 * *array_range - function creates an array of integers
 * @min: value passed
 * @max: value passed
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int count;
	int *minMax;

	if (min > max)
	{
		return (NULL);
	}

	minMax = malloc(sizeof(int) * ((max - min) + 1));

	if (minMax == NULL)
	{
		return (NULL);
	}

	for (count = 0; min <= max; count++)
	{
		minMax[count] = min;
		min++;
	}

	return (minMax);
}
