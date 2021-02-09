#include "holberton.h"

/**
* print_last_digit - prints absolute value
* @r: int sents to function
*
* Return: 0
*/


int print_last_digit(int r)
{

	r = (r % 10);

	if (r < 0)
	{
		r = r * -1;
	}

	_putchar(r + '0');
	return (r);
}
