#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int numberOfElementsInArray(char *usrinput);
char **getArray(char *usrinput);

/**
 * strtow - fucking splits up a string
 * @str: string passed
 * Return: NULL or ptr to 2D array
 */
char **strtow(char *str)
{
	char **words;
	int index = 0, index2 = 0, index3 = 0, spaces = 0, size = 0;

	if (str == NULL || (strcmp(str, "") == 0))
		return (NULL);

	size = numberOfElementsInArray(str);
	words = malloc((sizeof(char) * size) + 1);
	if (words == NULL)
		return (NULL);

	for (index2 = 0; str[index2] != '\0'; index2++)
	{
		while (str[index2] == 32)
		{
			index2++;
			spaces = 0;
		}
		spaces++;
		if (str[index2 + 1] == 32 || str[index2 + 1] == '\0')
		{
			words[index] = malloc((sizeof(char) * spaces) + 1);
			index++;
		}
	}

	for (index = 0, index2 = 0; index < size && str[index] != '\0' ; index++)
	{
		while (str[index2] == 32 && str[index2] != '\0')
			index2++;

		for (index3 = 0; str[index2] != 32 && str[index2] != '\0'; index2++)
		{
			words[index][index3] = str[index2];
			index3++;
		}
		words[index][index3] = '\0';
	}
	words[index] = NULL;

	return (words);
}

/**
 * numberOfElementsInArray - function counts the number of words
 * in the user input
 * @usrinput: input from user
 * Return: length of the 2D array for user input
 */
int numberOfElementsInArray(char *usrinput)
{
	int count = 0, lengthOfArray = 0;

	for (count = 0; usrinput[count] != '\0'; count++)
	{
		if (usrinput[count] == ' ' && usrinput[count + 1] == '\0')
			return (lengthOfArray);

		if ((usrinput[count] == 32 && usrinput[count + 1] != 32) ||
				(count == 0 && usrinput[count] != 32))
			lengthOfArray++;
	}
	return (lengthOfArray);
}
