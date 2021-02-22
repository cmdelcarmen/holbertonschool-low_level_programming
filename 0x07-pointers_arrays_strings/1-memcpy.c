#include "holberton.h"

/**
 * *_memcpy - check the code for Holberton School students.
 * @dest: pointer passed
 * @src: pointer passed
 * @n: unsigned int passed
 *
 * Return: dest
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
