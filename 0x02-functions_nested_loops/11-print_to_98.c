#include "holberton.h"
#include <stdio.h>
/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
*/
 

void print_to_98(int n)
{

	if(n < 99)
	{
		for (n = n; n < 98; n++)

		{printf("%i, ", n);}
	} 

		else
		{
			for (n = n; n > 98; n--)

			printf("%i, ", n);
		}
			
	printf("98 \n");
	
}

