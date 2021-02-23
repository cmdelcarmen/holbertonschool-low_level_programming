#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - check the code for Holberton School students.
 * @a: pointer passed
 * @size: int passed
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
		int count, sum1, sum2;
		double squareSize;

		squareSize = (size * size);
		sum1 = 0;
		sum2 = 0;

		for (count = 0; count < squareSize; count += (size + 1 ))
		{
			sum1 += (a[count]);
		}

		for (count = size - 1; count < squareSize; count += (size - 1))
		{
			sum2 += (a[count]);
			squareSize--;
		}

		printf("%i, %i \n", sum1, sum2);
}
