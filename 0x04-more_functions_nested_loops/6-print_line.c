#include "holberton.h"
/**
* print_line - function prints underscores
*@n: int passed to function
*
*/

void print_line(int n)
{
	int lines;

	for (lines = 0; lines < n; lines++)
	{
		_putchar(95);
	}

	_putchar('\n');
}
