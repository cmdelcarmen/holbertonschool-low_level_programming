#include "holberton.h"
/**
* print_diagonal - Draws a diagonal line.
* @num: The number of \ to be printed.
**/
void print_diagonal(int num)
{
	int line;
	int space;

	if (num > 0)
		for (line = 0; line < num; line++)
		{
			for (space = 0; space < line; space++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
