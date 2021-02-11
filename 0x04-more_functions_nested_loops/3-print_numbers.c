#include "holberton.h"
/**
* print_numbers - function multiplies two intergers
*
* Return: numbers
*/
void print_numbers(void)
{
	int count;

	for (count = 0; count < 10; count++)
	{
		_putchar(count + 48);
	}

	_putchar('\n');
}
