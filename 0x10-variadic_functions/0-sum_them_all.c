#include <stdarg.h>

/**
 * sum_them_all - returns sum of all integers
 * @n: int passed
 * Return: total or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int count, number, total = 0;
	va_list listOfNumbers;

	if (n == 0)
	{
		return (0);
	}

	va_start(listOfNumbers, n);

	for (count = 0; count < n; count++)
	{
		number = va_arg(listOfNumbers, int);
		total += number;
	}

	va_end(listOfNumbers);
	return (total);
}
