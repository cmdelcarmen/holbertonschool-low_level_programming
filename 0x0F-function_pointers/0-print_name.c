#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - funtion prints a name
 * @name: array of chars passed
 * @f: function passed
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
	else
	{
		return;
	}
}
