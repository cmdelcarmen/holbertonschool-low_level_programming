#include "holberton.h"
/**
* _isupper - function evaluates wheter c is a number
* @c: number valued
*
* Return: returns 1 if digit, 0 if otherwise
**/

int _isupper(int c)
{

	if (c > 64 && c < 91)

		return (1);

	else
		return (0);
}
