#include "holberton.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * *create_array - function creates an array
 * of chars and initializes it with a specific char
 * @size: size of array
 * @c: char
 * Return: NULL if size = 0 or a pointer to the 1st byte of allocated memory
 */
char *create_array(unsigned int size, char c)
{
	char *firstByte;
	unsigned int count;

	if (size == 0)
	{
		return (NULL);
	}

	firstByte = malloc(sizeof(char) * size);

	if (firstByte == NULL)
	{
		return (NULL);
	}

	for (count = 0; count < size; count++)
	{
		firstByte[count] = c;
	}

	return (firstByte);
}
