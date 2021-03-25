#include "holberton.h"

unsigned int _atoi(const char *s);

/**
 * binary_to_uint - function conversts a binary number to an insigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converter number or 0 if b is NULL or if non index element
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int binary, lastNum, uInt = 0, count = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (count = 0; b[count] != '\0'; count++)
	{
		if (b[count] != '0' && b[count] != '1')
		{
			return (0);
		}
	}

	binary = _atoi(b);
	count = 0;

	while (binary != 0)
	{
		lastNum = binary % 10;
		uInt += lastNum << count;
		binary = binary / 10;
		count++;
	}

	return (uInt);
}

/**
 * _atoi - function turns string into integer
 * @s: string passed
 * Return: unsigned int
 */
unsigned int _atoi(const char *s)
{
	unsigned int i = 0, len = 0, num = 0, sign = 1, ok = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while (i < len && ok == 0)
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + sign * (s[i] - 48);
			if (s[i + 1] >= '0' && s[i + 1] <= '9')
				ok = 0;
			else
				ok = 1;
		}
		i++;
	}
	return (num);
}
