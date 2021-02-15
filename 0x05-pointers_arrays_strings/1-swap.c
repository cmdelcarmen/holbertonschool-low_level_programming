#include "holberton.h"
/**
* swap_int - function switches values of pointers
* @a: pointer passed
* @b: pointer passed
*/
void swap_int(int *a, int *b)
{
	int c = 0;

	 c = *a;
	*a = *b;
	*b = c;
}
