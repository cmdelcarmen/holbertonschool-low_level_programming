#include "holberton.h"

/**
 * binary_to_uint - function conversts a binary number to an insigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converter number or 0 if b is NULL or if non index element
 *
 */

int _atoi(const char *s);

unsigned int binary_to_uint(const char *b)
{
	int binary, lastNum, uInt = 0, count = 0;

	if (b == NULL)
	{
		return (0);
	}

	binary = _atoi(b);

	while (binary != 0)
	{
		lastNum = binary % 10;
		uInt += lastNum << count;
		binary = binary / 10;
		count++;
	}

	return (uInt);
}

int _atoi(const char *s)
{
	int i = 0, len = 0, num = 0, sign = 1, ok = 0;

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
