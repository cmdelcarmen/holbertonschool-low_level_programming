#include "holberton.h"
/**
* print_times_table - prints out times table
*
* @n: valued being sent to the funcation
*/
void print_times_table(int n)
{
	int num, multiple, results;

	if (n >= 0 && n <= 15)
	{

		for (num = 0; num <= n; num++)

		{
			_putchar('0');

			for (multiple = 1; multiple <= n; multiple++)
			{
				_putchar(44);
				_putchar(32);

				results = num * multiple;

				if (results <= 99)

					_putchar(32);

				if (results <= 9)

					_putchar(32);

				if (results  >= 100)
				{
					_putchar((results / 100) + '0');
					_putchar(((results / 10)) % 10 + '0');
				}

				else if (results <= 99 && results >= 10)
				{
					_putchar((results / 10) + '0');
				}
				_putchar((results % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
