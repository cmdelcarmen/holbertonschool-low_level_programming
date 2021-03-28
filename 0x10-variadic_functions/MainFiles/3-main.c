#include "variadic_functions.h"
#include <stdio.h>

/**
 *  * main - check the code for Holberton School students.
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	print_all(NULL, NULL);
	print_all("s",NULL);
	print_all("eceeeisfp", 'H', 0, "lberton", 3.14);
	print_all("ceis", 'H', 0, "lberton");
	return (0);
}
