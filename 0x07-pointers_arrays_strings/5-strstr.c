#include "holberton.h"

/**
 * *_strstr - check the code for Holberton School students.
 * @haystack: pointer passed
 * @needle: pointer passed
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int count, count2;
	int match = 0;

	for (count = 0; haystack[count] != '\0'; count++)
	{
		for (count2 = 0; needle[count2] != '\0'; count2++)
		{
			if (haystack[count + count2] == needle[count2])
				match = 1;

			else
			{
				match = 0;
				break;
			}
		}
		if (match == 1)
			return (haystack += count);

	}
	return (haystack += count);
}
