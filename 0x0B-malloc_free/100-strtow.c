#include "holberton.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

int getLength(char *str);

/**
 * **strtow - function splits string into words
 * @str: pointer passed
 * Return: pointer
 */
char *strtow(char *str)
{
	int arrayLength, count;
	char *splitWords;

	if (str == NULL || str == 0)
	{
		return (NULL);
	}

	arrayLength = getLength(str);
	printf("%d\n", arrayLength);
	splitWords = malloc((sizeof(char) * arrayLength) + 1);

	if (splitWords == NULL)
	{
		return (NULL);
	}
	for(count = 0; str[count] != '\0'; count++)
	{
		if ((str[count] == ' '))
		{
			if(str[count - 1] != ' ')
				continue;
		}
		if(str[count] == ' ')
		{
			splitWords[count] = ('\n');
		}
		else
		{
			splitWords[count] = str[count];
		}
	}

	return(splitWords);
}

/**
 * getLength - get length of array
 * @str: array
 * Return: arrayLength
 */
int getLength(char *str)
{
	int count, arrayLength = 0;

	for (count = 0; str[count] != '\0'; count++)
	{
		if ((str[count] == ' ' ))
		{
			if(str[count - 1] != ' ')
				continue;
		}
		arrayLength++;
	}
	return (arrayLength);
}

