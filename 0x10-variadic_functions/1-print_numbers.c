#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function prints all integers
 * @separator: string to be printed between numbers
 * @n: int passed
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count, printedNumber = 0;
	va_list numbers;

	va_start(numbers, n);

	if (separator == NULL)
	{
		putchar('\0');
		return;
	}

	for (count = 0; count < n; count++)
	{
		printedNumber = va_arg(numbers, unsigned int);
		printf("%d", printedNumber);

		if ((count + 1) != n)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(numbers);
}
