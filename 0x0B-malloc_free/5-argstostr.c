#include "holberton.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
int getLength(char **av);

/**
 * *argstostr - function that concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: each array
 * Return: NULL or pointer to new string
 */
char *argstostr(int ac, char **av)
{
	int arrayLength = 0, count, count2, count3 = 0;
	char *concatenatedArguments;

	if (av == NULL || ac == 0)
	{
		return (NULL);
	}

	arrayLength = getLength(av);
	concatenatedArguments = malloc((sizeof(char) * arrayLength) + 1);

	if (concatenatedArguments == NULL)
	{
		return (NULL);
	}

	for (count = 0; av[count] != NULL; count++)
	{
		for (count2 = 0; av[count][count2] != '\0'; count2++)
		{
			concatenatedArguments[count3] = av[count][count2];
			count3++;
		}
		concatenatedArguments[count3] = ('\n');
		count3++;
	}

	return (concatenatedArguments);
}

/**
 * getLength - get length of array
 * @av: arrays
 * Return: arrayLength
 */
int getLength(char **av)
{
	int count, count2, arrayLength;

	for (count = 0; av[count] != NULL; count++)
	{
		for (count2 = 0; av[count][count2] != '\0'; count2++)
		{
			arrayLength++;
		}
		arrayLength++;
	}
	return (arrayLength);
}
