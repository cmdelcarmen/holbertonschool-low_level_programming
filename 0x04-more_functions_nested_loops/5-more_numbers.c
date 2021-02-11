#include "holberton.h"
/**
* more_numbers - function multiplies two intergers
*
* Return: numbers
*/
void more_numbers(void)
{
	int count;
	int count2;

	for (count2 = 0; count2 < 10; count2++)
	{
		for (count = 0; count < 15; count++)
		{
			if (count > 9)
			{
				_putchar((count / 10) + 48);
			}
			_putchar((count % 10) + 48);
	}
		_putchar('\n');
	}
}
