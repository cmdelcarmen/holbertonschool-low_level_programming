#include "lists.h"

/**
 * listint_len - function returns the number of elements in a linked list
 * @h: pointer to head of linked list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t numberOfElements = 0;

	while (h != NULL)
	{
		h = h->next;
		numberOfElements++;
	}

	return (numberOfElements);
}
