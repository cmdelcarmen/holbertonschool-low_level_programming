#include "lists.h"

/**
 * print_listint - function prints all elements of a list
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t numberOfNodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		numberOfNodes++;
	}

	return (numberOfNodes);
}

