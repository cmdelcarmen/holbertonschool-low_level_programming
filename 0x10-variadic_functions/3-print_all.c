#include <stdarg.h>
#include <stdio.h>

/**
 * getLength - function
 * @s: array of char
 * Return: int:
 */
int getLength(const char * const s)
{
	int count, arrayLength = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		arrayLength++;
	}
	return (arrayLength);
}

/**
 * print_all - function prints anything
 * @format: data types
 * Return: nothing:
 */
void print_all(const char * const format, ...)
{
	int count2 = 0, stop;
	va_list printList;
	char *string;

	va_start(printList, format);
	stop = getLength(format);
	while (format[count2] != '\0')
	{
		switch (format[count2])
		{
			case 'c':
				printf("%c", va_arg(printList, int));
				break;
			case 'i':
				printf("%i", va_arg(printList, int));
				break;
			case 'f':
				printf("%f", va_arg(printList, double));
				break;
			case 's':
				string = va_arg(printList, char *);
				if (string != NULL)
				{
					printf("%s", string);
				}
				else
				{
					printf("(nil)");
				}
				break;
			default:
				break;
		}
		count2++;
		if (count2 < stop)
			printf(", ");

	}
	printf("\n");
	va_end(printList);
}
