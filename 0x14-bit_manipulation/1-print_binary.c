#include <stdio.h>
#include "holberton.h"

/**
 * print_binary - function prints out binary number
 * @n: number passed
 */
void print_binary(unsigned long int n)
{

	if (n > 1)
	{
		print_binary(n >> 1);
	}

	_putchar(n & 1);
}
