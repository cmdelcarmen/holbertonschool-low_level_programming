#include "holberton.h"

/**
 * *_strchr - check the code for Holberton School students.
 * @s: pointed passed
 * @c: char passed
 *
 * Return: pointer or NULL
 */

char *_strchr(char *s, char c)
{
	int printPoint;


	for (printPoint = 0; s[printPoint] != c; printPoint++)
		;

	if (s == '\0')
	{
		return (0);
	}
	else
	{
		s += printPoint;
		return (s);
	}
}
