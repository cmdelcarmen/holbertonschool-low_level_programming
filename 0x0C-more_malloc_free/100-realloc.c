#include <stdlib.h>
#include "holberton.h"

/**
 * *_realloc - function that reallocates a memory block using
 * @ptr: old pointer
 * @old_size: ptr size
 * @new_size: new ptt size
 * Return: new pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newPointer;
	unsigned int count;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		newPointer = malloc(new_size);
		if (newPointer)
		{
			return (NULL);
		}
	}

	newPointer = malloc(new_size);
		if (newPointer == NULL)
		{
			return (NULL);
		}

	for (count = 0; count < new_size; count++)
	{
		newPointer[count] = ((char *)ptr)[count];
	}

	free(ptr);

	return (newPointer);
}
