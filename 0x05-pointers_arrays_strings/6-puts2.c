#include "holberton.h"
/**
* puts2 - function puts2
* @str: pointer passed
*/
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
				if (count % 2 == 0)
				{
					_putchar(*str);
				}
			str++;
		}
	_putchar('\n');
}
