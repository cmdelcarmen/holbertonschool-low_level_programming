#include "holberton.h"
/**
* print_most_numbers - counts numbers up to 9 except 2 and 4
*
* Return: count numbers
*/
void print_most_numbers(void)
{
	int count;

	for (count = 0; count < 10; count++)
	{
		if (count != 2 && count != 4)
			_putchar(count + 48);

		else
			continue;
	}
	_putchar('\n');
}
