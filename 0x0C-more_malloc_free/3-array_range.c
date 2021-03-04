#include <stdlib.h>

/**
 * *array_range - function creates an array of integers
 * @min: value passed
 * @max: value passed
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int count = 0;
	int *minMax;

	if (min > max)
	{
		return (NULL);
	}

	minMax = malloc(sizeof(int) * (max + 1));

	if (minMax == NULL)
	{
		return (NULL);
	}

	for (count = min; count <= max; count++)
	{
		minMax[count] = count;
	}

	return (minMax);
}
