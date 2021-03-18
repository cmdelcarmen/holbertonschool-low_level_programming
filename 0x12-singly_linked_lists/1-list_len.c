#include "lists.h"

/**
 * list_len - function returns the number of elements in a linked list_t list
 * @h: head to linked list
 * Return: number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	int numOfMods = 0;

	while (h != NULL)
	{
		h = h->next;
		numOfMods++;

	}
	return (numOfMods);
}
