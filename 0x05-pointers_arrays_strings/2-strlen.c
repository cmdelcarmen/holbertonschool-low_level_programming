#include "holberton.h"

int _strlen(char *s)
{
	int countString;

	countString = 0;

	while (*s != '\0')
	{	countString++;
		s++;
	}
	return (countString);
}
