#include "holberton.h"

void swap_int(int *a, int *b)
{
	int c = 0;

	 c = *a;
	*a = *b;
	*b = c;
}
