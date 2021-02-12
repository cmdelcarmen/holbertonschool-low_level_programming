#include "holberton.h"
/**
* print_triangle - prints a square character
* @big: how big the square is
*/

void print_triangle(int big)
{
	int rows;
	int hashes;

	if (big <= 0)
		_putchar('\n');

	for (rows = 1; rows <= big; rows++)
	{
		for (hashes = 1; hashes <= big; hashes++)
		{
			if (hashes <= (big - rows))
				_putchar(' ');

			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
