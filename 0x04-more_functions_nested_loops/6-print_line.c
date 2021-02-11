#include "holberton.h"

void print_line(int n)
{
	int lines;

	for (lines = 0; lines < n; lines++)
	{
		_putchar(95);
	}

	_putchar('\n');
}
