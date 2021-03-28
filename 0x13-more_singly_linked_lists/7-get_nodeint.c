#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: pointer to head to node
 * @index: node to return
 * Return: node at index or NULL if list empty
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
		{
			return (head->next);
		}
		head = head->next;
		count++;
	}

	return (NULL);
}
