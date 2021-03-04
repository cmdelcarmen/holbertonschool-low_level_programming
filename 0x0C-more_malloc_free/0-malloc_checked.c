#include <stdlib.h>

/**
 * malloc_checked: function prints allocated memory
 * @b: int passed
 * Return: pointer to allocated memory or 98
 */
void *malloc_checked(unsigned int b)
{
	void *newPointer;

	newPointer = malloc(b);

	if (newPointer == NULL)
	{
		exit(98);
	}

	return (newPointer);
}
