 #include "lists.h"

/**
 * print_dlistint - function prints all the elements of a dlistint_t list
 * @h: pointer to head of the linked list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *tempPointer;

	tempPointer = h;

	while (tempPointer != NULL)
	{
		printf("[%d]\n", tempPointer->n);

		tempPointer = tempPointer->next;
		count++;
	}

	return (count);
}
