#include "lists.h"

/**
 * print_list - function prints all the elements of a list_t list
 * @h: pointer to head of the linked list
 * Return: the number of nodes
 */


size_t print_list(const list_t *h)
{
	int count = 0;


	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] ", h->len);
			printf("[%s]\n", h->str);
		}
		h = h->next;
		count++;
	}

	return (count);
}
