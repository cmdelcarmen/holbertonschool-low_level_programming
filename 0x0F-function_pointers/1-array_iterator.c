#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - function that executes a function given
 * as a parameter on each element of an array
 * @array: array of ints
 * @size: size of array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && size != 0 && action != NULL)
	{
		unsigned int count = 0;

		for (count = 0; count < size; count++)
		{
			action(array[count]);
		}
	}
}
