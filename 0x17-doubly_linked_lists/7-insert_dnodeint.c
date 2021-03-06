#include "lists.h"

/**
 * insert_dnodeint_at_index - adds a new node
 * @h: head pointer
 * @idx: where to insert the new node
 * @n: value for newnode
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	if (temp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}

	return (NULL);
}
