#include "holberton.h"

/**
 * _pow_recursion - check the code for Holberton School students.
 * @x: value passed
 * @y: value passed
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		y--;
		return (x * _pow_recursion(x, y));
	}
}
