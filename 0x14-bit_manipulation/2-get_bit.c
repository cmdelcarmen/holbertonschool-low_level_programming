#include "holberton.h"

int getLength(unsigned int n);

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number passed
 * @index: index to count until
 * Return: (n & 1)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count, length;

	length = getLength(n);

	if (index > (length - 1))
	{
		return (-1);
	}

	for (count = 0; count < index; count++)
	{
		n = n >> 1;
	}

	return (n & 1);
}
/**
 * recur_binary - function prints out recursion
 * @n: unsigned int 
 * Return: length
 */
int getLength(unsigned int number)
{
	int count = 1;

	if ((number / 2) > 0)
	{
		count += getLength(number / 2);
	}

	return (count);
}
