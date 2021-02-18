#include "holberton.h"

/**
 * * *_strcat - function copies string
 * * @dest: pointer passed
 * * @src: pointer passed
 * *
 * * Return: dest pointer
 */
char *_strcat(char *dest, char *src)
{
	int count;
	int arrayLength;

	arrayLength = 0;

	for (count = 0; src[count] != '\0'; count++)
	{
		arrayLength++;
	}

	arrayLength--;

	for (count = 0; src[count] != '\0'; count++)
	{
		dest[arrayLength + count] = src[count];
	}

	dest[arrayLength + count] = '\0';

	return (dest);
}
