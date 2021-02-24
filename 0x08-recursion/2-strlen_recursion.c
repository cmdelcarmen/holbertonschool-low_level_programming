#include "holberton.h"

/**
 * _strlen_recursion - check the code for Holberton School students.
 * @s: pointer passed
 * Return: count
 */

int _strlen_recursion(char *s)
{

	if (s[0] == '\0')
	{
		return (0);
	}
	else
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
}
