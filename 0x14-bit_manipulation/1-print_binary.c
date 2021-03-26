#include "holberton.h"

/**
 * print_binary - function prints out binary number
 * @n: number passed
 */
void print_binary(unsigned long int n)
{

	while (n > 1)
	{
		n = n >> 1;
		_putchar((n & 1) + 48);
	}
}
