#include "holberton.h"
/**
* print_square - function prints squares
* @size: square size
*/

void print_square(int size)
{
	int count;
	int count3;

	for (count3 = 1; count3 < size; count3++)
	{
		for (count = 1; count < size; count++)
		{
			_putchar(35);
		}

		_putchar(35);
		_putchar('\n');
	}
}
