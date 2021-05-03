#include "lists.h"


/**
 * add_dnodeint - function that adds a node at the beginning of a list_t list
 * @head: head pointer
 * @n: value for node
 * Return: the address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tempPointer;

	if (head == NULL)
	{
		return (NULL);
	}

	tempPointer = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (tempPointer == NULL)
	{
		return (NULL);
	}

	tempPointer->n = n;
	tempPointer->next = *head;
	tempPointer->prev = NULL;

	if(*head != NULL)
	{
		*head->prev = tempPointer;
	}

	*head = tempPointer;

	return (tempPointer);
}
