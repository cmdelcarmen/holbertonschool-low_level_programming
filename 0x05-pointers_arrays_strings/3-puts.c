#include "holberton.h"
/**
* _puts - function displays string
* @str: pointer passed to function
*/
void _puts(char *str)

{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
