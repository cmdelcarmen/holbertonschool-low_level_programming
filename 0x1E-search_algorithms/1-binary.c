#include "search_algos.h"

/**
 * print_array - Function prints an array (format: "1, 2, 3")
 * @array: array to be printed
 * @start: first element of array
 * @end: last element of array
 */
void print_array(int *array, int start, int end)
{
	int idx = 0;

	printf("Searching in array: ");

	for (idx = start; idx < end; idx++)
		printf("%i, ", array[idx]);
	printf("%i\n", array[idx]);
}

/**
 * binary_search - Function that searches for a value in a
 * sorted array of integers using the Binary search algorithm
 * @array: array to parse through
 * @size: size of the array
 * @value: value to be searched for
 * Return: -1 if array is NULL or value not found, or the
 * index where the value is located at
 */
int binary_search(int *array, size_t size, int value)
{
	int middle = 0;
	int start_of_array = 0, end_of_array = size - 1;

	if (array)
	{
		while (start_of_array <= end_of_array)
		{
			print_array(array, start_of_array, end_of_array);

			middle =  ((start_of_array + end_of_array) / 2);

			if (array[middle] == value)
				return (middle);

			if (array[middle] < value)
				start_of_array = middle + 1;

			else
				end_of_array = middle - 1;
		}

		return (-1);
	}
	else
		return (-1);
}
