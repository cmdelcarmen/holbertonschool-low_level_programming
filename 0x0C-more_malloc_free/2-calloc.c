#include <stdlib.h>

/**
 * *_calloc - function allocates memory for an array
 * @nmemb: int passed
 * @size: int passed
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *pointer;
	int count;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	pointer = malloc(nmemb * size);
	if (pointer == NULL)
	{
		return (pointer);
	}

	for (count = 0; pointer[count] != 0; count++)
	{
		pointer[count] = 0;
	}

	return (pointer);
}
