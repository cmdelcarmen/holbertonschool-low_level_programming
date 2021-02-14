#include "holberton.h"

void puts2(char *str)
{
	int arrayLength, count;

	for (count = 0; str[count] != '\0'; count++)
		{
			arrayLength++;
		}

	arrayLength--;

	for (count = 0; count <= arrayLength; count++)
		{
			if( count % 2 == 0)
				{
					_putchar(*str);
				}
			str++;	
		}
	_putchar('\n');
}
