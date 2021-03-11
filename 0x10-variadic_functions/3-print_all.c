#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function prints anything
 * @format: data types
 * Return: nothing:
 */
void print_all(const char * const format, ...)
{
	int count2 = 0;
	va_list printList;
	char *string, *comma = "";

	if (format == NULL)
	{
		printf("\n");
		va_end(printList);
		return;
	}

	va_start(printList, format);
	while (format[count2] != '\0')
	{
		switch (format[count2])
		{
			case 'c':
				printf("%s%c", comma, va_arg(printList, int));
				break;

			case 'i':
				printf("%s%i", comma, va_arg(printList, int));
				break;

			case 'f':
				printf("%s%f", comma, va_arg(printList, double));
				break;

			case 's':
				string = va_arg(printList, char *);
				if (string == NULL)
					string = "(nil)";
				printf("%s%s", comma, string);
				break;
		}
		comma = ", ";
		count2++;
	}

	printf("\n");
	va_end(printList);
}
