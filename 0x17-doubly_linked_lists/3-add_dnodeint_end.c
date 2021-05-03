#include "lists.h"


/**
 * add_dnodeint_end - function adds node at the end of a list_t list
 * @head: pointer to head of node
 * @n: value for node
 * Return: pointer to last node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *copy, *temp;

	temp = *head;

	while (temp != NULL)
	{
		temp = temp->next;
	}

	copy = malloc(sizeof(dlistint_t));
	if (copy == NULL)
	{
		return (NULL);
	}

	copy->n = n;
	copy->next = NULL;

	if (temp != NULL)
	{
		temp->next = copy;
	}
	if (temp == NULL)
	{
		copy->prev = NULL;
		*head = copy;
		return (*head);
	}
	copy->prev = temp;

	return (copy);
}
