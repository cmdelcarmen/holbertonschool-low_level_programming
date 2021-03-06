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

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (count = 0; s1[count] != '\0'; count++)
	{
		arrayLength++;
	}
	for (count = 0; s2[count] != '\0'; count++)
	{
		arrayLength++;
	}

	concatenatedString = malloc(sizeof(char) * arrayLength + 1);

	if (concatenatedString == NULL)
	{
		return (NULL);
	}

	for (count = 0; s1[count] != '\0'; count++)
	{
		concatenatedString[count] = s1[count];
	}
	for (count2 = 0; s2[count2] != '\0'; count2++)
	{
		concatenatedString[count] = s2[count2];
		count++;
	}
	concatenatedString[count] = '\0';

	return (concatenatedString);
}
