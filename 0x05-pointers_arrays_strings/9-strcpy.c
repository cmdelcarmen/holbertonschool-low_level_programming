#include "holberton.h"
#include <stdio.h>

char *_strcpy(char *dest, char *src)
{
	int count, arrayLength;

	arrayLength = 0;

	for (count = 0; src[count] != '\0'; count++)
	{
		arrayLength++;
	}

	for(count = 0; count <= arrayLength; count++)
	{
		dest[count] = src[count];
	}

	printf("\n");

	return(dest);
}
