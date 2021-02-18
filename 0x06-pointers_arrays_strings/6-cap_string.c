#include "holberton.h"
#include <stdbool.h>

char *cap_string(char *s)
{
	int count;
	int capitalize = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		if (capitalize == 1)
		{
			if (s[count] > 96 && s[count] < 123)
			{
				s[count] -= 32;
			}
			capitalize = 0;
			continue;
		}
		if (s[count] == 32)
		{	
				capitalize = 1;
				continue;
		}
	}
	return (s);
}
