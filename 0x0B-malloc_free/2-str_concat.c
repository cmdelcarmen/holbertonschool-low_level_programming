#include "holberton.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - function concatenates two strings
 * @s1: string passed
 * @s2: string passed
 * Return: pointer or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenatedString;
	int count, count2 = 2, arrayLength = 0;

	for (count = 0; s1[count] != '\0'; count++)
	{
		arrayLength++;
	}
	arrayLength--;

	for (count = 0; s2[count] != '\0'; count++)
	{
		arrayLength++;
	}
	arrayLength--;

	concatenatedString = malloc(sizeof(char) * arrayLength);

	if (concatenatedString == NULL)
	{
		return (NULL);
	}

	arrayLength += 2;

	for (count = 0; s1[count] != '\0'; count++)
	{
		concatenatedString[count] = s1[count];
		arrayLength--;
	}

	for (count2 = 0; count2 <= arrayLength; count2++)
	{
		concatenatedString[count] = s2[count2];
		count++;
	}
	return (concatenatedString);
}
