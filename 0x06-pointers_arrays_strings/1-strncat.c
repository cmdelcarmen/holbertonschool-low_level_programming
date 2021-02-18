#include <stdio.h>

char *_strncat(char *dest, char *src, int n)
{
	int arrayLength, count;

	for (arrayLength = 0; dest[arrayLength] != '\0'; arrayLength++)
		;

	for (count = 0; src[count] != '\0'; count++)
		{
			if (count < n)
			{
				dest[arrayLength + count] =  src[count];
			}
		}

	if ((arrayLength + count) < n)
		{
			dest[arrayLength + count] = '\0';
		}

	return (dest);
}
