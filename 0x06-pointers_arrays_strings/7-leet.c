#include <stdio.h>

/**
 * *leet - check the code for Holberton School students.
 * @s: pointer passed
 *
 * Return: s
 */

char *leet(char *s)
{
	int count, count2;

	char letter[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char num[] =  {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (count = 0; s[count] != '\0'; count++)
	{
		for (count2 = 0; letter[count2] != '\0'; count2++)
		{
			if (letter[count2] == s[count])
			{
				s[count] = num[count2];
			}
		}
	}
	return (s);
}
