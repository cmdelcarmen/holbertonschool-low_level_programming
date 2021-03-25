#include "holberton.h"

/**
 *  * get_bit - function that returns the value of a bit at a given index
 *   * @n: number passed
 *    * @index: index to count until
 *     * Return: (n & 1)
 *      */

int set_bit(unsigned long int *n, unsigned int index)
{

	unsigned long int newNum;

	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	newNum = 1 << index;
	*n = *n | newNum;

	return (1);
}
