#include "holberton.h"
/**
* print_rev - function prints string backwards
* @s: pointer passed to function
*/

void print_rev(char *s)
{
	int arrLength;

	arrLength = 0;

	while (*s != '\0')
	{
		arrLength++;
		s++;
	}
	arrLength--;

	for (; arrLength >= 0; arrLength--)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
