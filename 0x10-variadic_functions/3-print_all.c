#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function prints anything
 * @fomrat:
 * Return: nothing:
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

void print_all(const char * const format, ...)
{
	int count2 = 0, comma = 0, stop;
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
				count2++;
				comma = 1;
				break;

			case 'i':
				printf("%i", va_arg(printList, int));
				count2++;
				comma = 1;
				break;

			case 'f':
				printf("%f", va_arg(printList, double));
				count2++;
				comma = 1;
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
				count2++;
				comma = 1;
				break;

			default:
				count2++;
				break;
		}
		if ((comma == 1) && count2 < stop)
		{
			printf(", ");
			comma = 0;
		}
	}
	printf("\n");
	va_end(printList);
}
