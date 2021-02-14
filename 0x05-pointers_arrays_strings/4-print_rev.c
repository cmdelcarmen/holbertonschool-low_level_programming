#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int arrLength;
		
	arrLength = 0;

	while(*s != '\0')
	{
		arrLength++;
		s++;
	}
	arrLength--;

	for (; arrLength >= 0; arrLength--)
	{
		s--;
		putchar(*s);
	}
	_putchar('\n');
}
