#include "holberton.h"

/**
 * print_chessboard - check the code for Holberton School students.
 * @a: array passed
 * Return: Always 0.
 */

void print_chessboard(char (*a)[8])
{
	int count, count2;

	for (count =  0; count < 8; count++)
	{
		for (count2 = 0; count2 < 8; count2++)
		{
			_putchar(a[count][count2]);
		}
		_putchar('\n');
	}
}
