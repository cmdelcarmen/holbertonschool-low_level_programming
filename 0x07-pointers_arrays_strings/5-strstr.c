#include "holberton.h"
#include <stdio.h>
/**
 * *_strstr - check the code for Holberton School students.
 * @haystack: pointer passed
 * @needle: pointer passed
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int count, count2 = 0;
	int beg = 0;

	if (*needle == '\0')
	{
		return (haystack);
	}

	for (count = 0; haystack[count] != '\0'; count++)
	{
		beg = count;

		while (haystack[count] == needle[count2])
		{
			if (needle[count + 1] == '\0')
				return (haystack += beg);
			count++;
			count2++;
		}
		count = beg;
	}
	return (0);
}
