#include "holberton.h"

char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; src[count] != '\0'; count++)
		{
				if (count < n)
				{
					dest[count] = src[count];
				}
		}
	
	dest[count] = '\0';

	return(dest);
}

