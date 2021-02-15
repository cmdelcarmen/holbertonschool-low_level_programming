#include "holberton.h"
#include <stdio.h>

/**
 * puts_half - functio prints out half a string
 * @str: pointer passed
 */
void puts_half(char *str)
{
	int count, arrayLength, printLength;

	arrayLength = 0;
	printLength = 0;

	for (count = 0; str[count] != '\0'; count++)
	{
		arrayLength++;
	}

	arrayLength--;

	if (arrayLength % 2 != 0)
	{
		printLength = ((arrayLength - 1) / 2);
	}

	else
		printLength = (arrayLength / 2);

	for (count = printLength + 1; count <= arrayLength; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
}
