#include "holberton.h"

/**
* rev_string - function prints string backwards
* @s: pointer passed to funcation
*/
void rev_string(char *s)
{
	int arrayLength = 0;
	int newSpot;
	int count;
	char sub;
	int oldSpot;

	for (count = 0; s[count] != '\0'; count++)
	{
		arrayLength++;
	}

	newSpot = arrayLength - 1;

	{
		for (oldSpot = 0; oldSpot <= newSpot; oldSpot++)
		{
			sub = s[oldSpot];
			s[oldSpot] = s[newSpot];
			s[newSpot] = sub;
			newSpot--;
		}
	}
}
