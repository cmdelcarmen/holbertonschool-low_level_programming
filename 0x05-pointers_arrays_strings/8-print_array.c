#include "holberton.h"
#include <stdio.h>

void print_array(int *a, int n)
{
	int count;

	for (count = 0; count <= (n - 1); count++)
		{
			if (count != (n - 1))
				{
					printf("%i, ", a[count]);
				}

			else
				printf("%i\n", a[count]);
		}
}
