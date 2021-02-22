#include "holberton.h"

/**
 * _strspn - check the code for Holberton School students.
 * @s: array passed
 * @accept: array passed
 *
 * Return: num of bytes in initial part of s, consis only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int count, count2;

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] == 32)
			break;

		for (count2 = 0; accept[count2] != '\0'; count2++)
		{
			if (s[count] == accept[count2])
			{
				n++;
			}
		}
	}

	return (n);
}
