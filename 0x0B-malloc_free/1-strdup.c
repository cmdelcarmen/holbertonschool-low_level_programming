#include "holberton.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - function returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: pointer to be copied
 * Return: NULL or pointer
 */
char *_strdup(char *str)
{
	char *copiedString;
	int count = 0, arrayLength = 0;

	if (*str == '\0')
	{
		return (NULL);
	}

	for (count = 0; str[count] != '\0'; count++)
	{
		arrayLength++;
	}

	arrayLength--;

	copiedString = malloc(sizeof(char) * arrayLength);

	for (count = 0; str[count] != '\0'; count++)
	{
		copiedString[count] = str[count];
	}

	if (str == NULL)
	{
		return (NULL);
	}

	return (copiedString);
}

