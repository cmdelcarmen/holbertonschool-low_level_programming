#include "lists.h"

/**
 * get_dnodeint_at_index - function adds node at the end of a list_t list
 * @index: node to locate
 * @head: head pointer
 * Return: pointer to last node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	while (index != 0)
	{
		if (head == NULL)
		{
			return (head);
		}
		head = head->next;
		index--;
	}
	return (head);
}
