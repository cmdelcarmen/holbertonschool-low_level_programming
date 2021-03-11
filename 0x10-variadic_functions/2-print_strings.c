#include <stdarg.h>
#include <stdio.h>

/**
 *print_strings - function prints strings
 *@separator: string separator
 *@n: how many strings
 *Return: 0;
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	va_list printedStrings;
	char *string;

	va_start(printedStrings, n);

	for (count = 0; count < n; count++)
	{
		string = va_arg(printedStrings, char *);
		if (string != NULL)
		{
			printf("%s", string);
		}
		else
		{
			printf("(nil)");
		}

		if ((count + 1) != n && (separator != NULL))
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(printedStrings);
}
