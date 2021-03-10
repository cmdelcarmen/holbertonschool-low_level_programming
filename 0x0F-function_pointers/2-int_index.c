#include "function_pointers.h"

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
