#include "holberton.h"

void puts_half(char *str)
{
	int count, arrayLength, printLength;

	arrayLength = 0;
	printLength = 0;

	for(count = 0; str[count] != '\0'; count++)
		{
			arrayLength++;
		}

	printLength = (arrayLength / 2);

	for(count = printLength; count <= arrayLength; count++)
		{
			_putchar(str[count]);
		}
	_putchar('\n');
}

