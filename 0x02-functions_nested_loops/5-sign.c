#include "holberton.h"

/**
*  print_sign - function check the code for Holberton School students.
* @n: int sent to funcation
*
* Return: Always 0.
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}

		else if (n == 0)
		{
			_putchar('0');
			return (0);
		}

				else
				{
					_putchar(45);
					return (-1);
				}
}
