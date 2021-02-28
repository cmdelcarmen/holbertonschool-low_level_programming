#include "holberton.h"

/**
 * * _islower - returns 1 if letter is uppercase, otherwise 0
 * *@c: in checked by function
 * *
 * * Return: 1 is lowercase, 0 if other
 * */

int _islower(int c)
{

		if (c > 96 && c < 122)
				{
							return (1);
								}

			else

						return (0);
}
