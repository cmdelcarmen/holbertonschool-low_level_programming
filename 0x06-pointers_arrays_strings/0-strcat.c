#include "holberton.h"

char *_strcat(char *dest, char *src)
{
	int count;
	int arrayLength;

	arrayLength = 0;

	for(count = 0; src[count] != '\0'; count++)
		{
			arrayLength++;
		}

	for(count = 0; src[count] != '\0'; count++)
		{
			dest[arrayLength + count ] = src[count];
		}

	dest[arrayLength] = '\0';

	return(dest);
}
