#include <stdlib.h>
#include "holberton.h"

char *_memcpy(char *dest, char *src, unsigned int n);

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
		return (newPointer);
	}

	newPointer = malloc(new_size);
		if (newPointer == NULL)
		{
			return (NULL);
		}

	_memcpy(newPointer, ptr, old_size);

	free(ptr);
	return (newPointer);
}
/**
 * *_memcpy - function copies memory
 * @dest: pointer
 * @src: pointer
 * @n: int passed
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		dest[count] = src[count];
	}

	return (dest);
}
