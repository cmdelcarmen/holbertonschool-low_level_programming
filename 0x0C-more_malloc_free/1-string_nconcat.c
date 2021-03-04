#include "holberton.h"
#include <stdlib.h>

int getLength(char *s1);

/**
 * *string_nconcat - function concatenates two strings
 * @s1: char array passed to function
 * @s2: char array passed to function
 * @n: num of bytes to allocate/copy from s2
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenatedString;
	unsigned int arrayLength1, arrayLength2, count, count2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	arrayLength1 = getLength(s1);
	arrayLength2 = getLength(s2);

	if (!(n >= arrayLength2))
	{
		arrayLength2 -= n;
	}

	concatenatedString = malloc(sizeof(char) * (arrayLength1 + arrayLength2) + 3);
	if (concatenatedString == NULL)
	{
		return (NULL);
	}

	for (count = 0; s1[count] != '\0'; count++)
	{
		concatenatedString[count] = s1[count];
	}
	for (count2 = 0; s2[count2] != '\0' && count2 < n; count2++)
	{
		concatenatedString[count] = s2[count2];
		count++;
	}
	concatenatedString[count] = '\0';

	return (concatenatedString);
}

/**
 * getLength - function gets length of array
 * @s: char array passed
 * Return: arrayLength
 */
int getLength(char *s)
{
	int count, arrayLength = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		arrayLength++;
	}
	return (arrayLength);
}
