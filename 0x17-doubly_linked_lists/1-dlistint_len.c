 #include "lists.h"

/**
 * print_dlistint - function prints all the elements of a dlistint_t list
 * @h: pointer to head of the linked list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *tempPointer;

	tempPointer = h;

	while (tempPointer != NULL)
	{
		tempPointer = tempPointer->next;
		count++;
	}

	return (count);
}
