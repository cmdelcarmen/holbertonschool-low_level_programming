#include <stdio.h>

/**
* main - check the code for Holberton School students.
* @a: an array of integers
* @n: the number of elements to swap
*
* Return: nothing.
*/
void reverse_array(int *a, int n)
{
	int count;
	int sub;

	n--;

	for (count = 0; count <= n; count++)
	{
		sub = a[count];
		a[count] = a[n];
		a[n] = sub;
		n--;
	}

}
