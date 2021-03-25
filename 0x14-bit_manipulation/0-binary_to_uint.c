#include "holberton.h"

/**
 * binary_to_uint - function conversts a binary number to an insigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converter number or 0 if b is NULL or if non index element
 *
 */
unsigned int binary_to_uint(const char *b)
{
	int binary, lastNum , uInt = 0, count = 0;

	binary = atoi(b);

	while(binary != 0)
	{
		lastNum = binary % 10;
		uInt += lastNum << count;
		binary = binary / 10;
		count++;
	}

	return (uInt);
}
