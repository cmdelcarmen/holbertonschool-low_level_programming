#include "holberton.h"
/**
* times_table - function prints multiples of 9
*
* Return: 0
*/

void times_table(void)
{
	int num;
	int multiple;
	int nineTimes;


	for (num = 0; num < 10; num++)

	{
		_putchar('0');

		for (multiple = 1; multiple < 10; multiple++)
		{
			_putchar(44);
			_putchar(32);

			nineTimes = num * multiple;

			if (nineTimes < 10)
				_putchar(32);

			else
				_putchar((nineTimes / 10) + '0');

			_putchar((nineTimes % 10) + '0');
		}

		_putchar('\n');
	}
}
