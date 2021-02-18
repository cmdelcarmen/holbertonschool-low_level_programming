#include "holberton.h"
/**
 * *string_toupper - check the code for Holberton School students.
 * @s: pointed passes
 * Return: char value
 */

char *string_toupper(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] > 96 && s[count] < 123)
		{
			s[count] -= 32;
		}
	}

	return (s);
}
