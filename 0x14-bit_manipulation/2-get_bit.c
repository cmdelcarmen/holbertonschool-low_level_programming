#include "holberton.h"

int recur_binary(unsigned int n);

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int idx, length;

	length = recur_binary(n);

	if (index > length)
	{
		return (-1);
	}

	for (idx = 0; idx < index; idx++)
	{
		n = n >> 1;
	}

	return (n & 1);
}

int recur_binary(unsigned int n)
{
	int count = 1;

	if ((n / 2) > 0)
	{
		count += recur_binary(n / 2);
	}

	return (count);
}
