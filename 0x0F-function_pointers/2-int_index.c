#include "function_pointers.h"

/**
 * int_index - function searches for an integer
 * @array: array of ints
 * @size: size of array
 * @cmp: pointer to function
 * Return: -1 or index in element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int count;
	int bool = 0;

	if (size <= 0)
	{
		return (-1);
	}

	if (array == NULL || cmp == NULL)
	{
		return (0);
	}

	for (count = 0; count < size; count++)
	{
		bool = cmp(array[count]);

		if (bool != 0)
		{
			return (count);
		}
	}

	return (-1);
}
