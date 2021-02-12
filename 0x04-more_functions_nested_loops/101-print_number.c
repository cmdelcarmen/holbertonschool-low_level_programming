#include "holberton.h"

/**
* print_number - function prints int
*@n: the number
*/
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

	if (number / 10)
	{
		print_number(number / 10);
	}

	_putchar(number % 10 + '0');

}
