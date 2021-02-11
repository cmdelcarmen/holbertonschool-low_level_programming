#include "holberton.h"

/**
* _isdigit - function evaluates wheter c is a number
* @c: number valued
*
* Return: returns 1 if digit, 0 if otherwise
**/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	else
		return (0);
}
