#include "holberton.h"
#include <stdio.h>
/**
* print_array - function prints out n elements of array
* @a: pointer passed to function
* @n: pointer passed to function
*/
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
			printf("%i", a[count]);
	}
	printf("\n");
}
