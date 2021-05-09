#include "lists.h"

/**
 * get_dnodeint_at_index - function adds node at the end of a list_t list
 * @index: node to locate
 * @head: head pointer
 * Return: pointer to last node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	for (count = 0; head != NULL; count++)
	{
		if ((count + 1) == index)
		{
			break;
		}
		head = head->next;
	}
	return (head);
}
