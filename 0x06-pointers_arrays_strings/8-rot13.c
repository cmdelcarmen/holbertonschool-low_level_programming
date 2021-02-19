#include "holberton.h"

/**
 * *rot13 - check the code for Holberton School students.
 *@s: pointer
 * Return: s
 */

char *rot13(char *s)
{
	int count;
	int count2;

	char upper[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
		'K', 'L', 'M',
		'N', 'O', 'P', 'Q', 'R', 'S', 'T',
		'U', 'V', 'W', 'X', 'Y', 'Z',
		'a', 'b', 'c', 'd', 'e', 'f', 'g',
		'h', 'i', 'j', 'k', 'l', 'm',
		'n', 'o', 'p', 'q', 'r', 's', 't', 'u',
		'v', 'w', 'x', 'y', 'z'};
	char lower[] = {'N', 'O', 'P', 'Q', 'R', 'S',
		'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
		'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
		'I', 'J', 'K', 'L', 'M',
		'n', 'o', 'p', 'q', 'r', 's',
		't', 'u', 'v', 'w', 'x', 'y', 'z', 'a',
		'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'};

	for (count = 0; s[count] != '\0'; count++)
	{
		for (count2 = 0; upper[count2] != '\0'; count2++)
		{
			if (s[count] == upper[count2])
			{
				s[count] = lower[count2];
				break;
			}
		}
	}

	return (s);
}
