#include "holberton.h"
#include <stdbool.h>

char *cap_string(char *s)
{
	int count;
	int count2;
	int capitalize = 1;

	char arr[] = {'\t',' ','\n', ',',';', '.', '!', '?', '"', '(',')', '{','}'};

	for (count = 0; s[count] != '\0'; count++)
	{
		if (capitalize == 1)
		{
			if (s[count] > 96 && s[count] < 123)
			{
				s[count] -= 32;
			}
			capitalize = 0;
		}

		for (count2 = 0; arr[count2] != '\0'; count2++)
		{
			if (s[count] == arr[count2])
				capitalize = 1;
		}
	}

	return (s);
}
