#include "holberton.h"
/**
* print_line - function prints underscores
*@n: int passed to function
*
*/

void print_line(int n)
{
	int lines;
	int spaces;

	for (lines = 0; lines < n; lines++)
	{
		for (spaces= 0; spaces < lines; spaces++)
			{
				_putchar(32);
			}
		_putchar(92);
		_putchar('\n');
	
	}		
}

