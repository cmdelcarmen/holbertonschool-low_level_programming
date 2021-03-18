#include "lists.h"

/**
 * print_list - function prints all the elements of a list_t list
 * @h: pointer to head of the linked list
 * Return: the number of nodes
 */


size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *tempPointer;

	tempPointer = h;

	while (tempPointer != NULL)
	{
		if (tempPointer->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] ", tempPointer->len);
			printf("[%s]\n", tempPointer->str);
		}
		tempPointer = tempPointer->next;
		count++;
	}

	return (count);
}
