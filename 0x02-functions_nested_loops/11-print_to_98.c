#include <stdio.h>
/**
* print_to_98 - check the code for Holberton School students.
*
* @n: the number being counted
*/

void print_to_98(int n)
{

	if (n < 99)
	{
		for(n = n; n <= 99; n++)

			printf("%i, ", n);
	}

	else
	{	for(n = n; n >= 98; n--)

		printf("%i, ", n++);
	}

	printf("98 \n");
}

