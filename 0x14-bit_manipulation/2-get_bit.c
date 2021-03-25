#include "holberton.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number passed
 * @index: index to count until
 * Return: (n & 1)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count;

	if (index > sizeof(unsigned long int))
	{
		return (-1);
	}

	for (count = 0; count < index; count++)
	{
		n = n >> 1;
	}

	return (n & 1);
}
