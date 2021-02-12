#include "holberton.h"

void print_number(int n)
{
	unsigned int number;

	if (number < 0)
	{
		number = -n;
		_putchar('-');
	}
	
	else
	{
		number = n;
	}

	if (x / 10)
	{
		print_number(x / 10);
	}

	_putchar(x % 10 + '0');

}
