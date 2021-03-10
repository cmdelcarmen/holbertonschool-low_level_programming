#include "function_pointers.h"

/**
 * print_name - funtion prints a name
 * @name: array of chars passed
 * @f: function passed
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != 0  && f != 0)
	{
		f(name);
	}
	else
	{
		return;
	}
}
