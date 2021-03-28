#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: pointer to head to node
 * @index: node to return
 * Return: node at index or NULL if list empty
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int count = 0;

	while (head != NULL)
	{
		temp = temp->next;
		if (count == index)
		{
			return (temp->next);
		}
		count++;
	}

	return (NULL);
}
