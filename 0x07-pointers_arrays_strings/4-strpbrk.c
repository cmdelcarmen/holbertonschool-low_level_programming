#include "holberton.h"

/**
 * *_strpbrk - check the code for Holberton School students.
 * @s: array passed
 * @accept: array passed
 *
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	int count, count2;
	int printPoint = 0;
	int stop = 1;

	for (count = 0; s[count] != '\0'; count++)
	{
		for (count2 = 0; accept[count2] != '\0'; count2++)
		{
			if (stop == 1)
			{
				if (s[count] == accept[count2])
				{
					printPoint = count;
					stop = 0;
				}
			}
		}
	}

	if (printPoint > 0)
	{
		s += printPoint;
		return (s);
	}

	else
		return ('\0');
}
