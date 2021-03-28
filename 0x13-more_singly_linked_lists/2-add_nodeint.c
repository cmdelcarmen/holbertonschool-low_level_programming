#include "lists.h"

/**
 * add_nodeint - function adds a new node at the beginnign of a list
 * @head: pointer to head of function
 * @n: data value for node
 * Return: address of the new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	if (head == NULL)
	{
		return (NULL);
	}

	newNode = malloc(sizeof(listint_t));
		if (newNode == NULL)
		{
			return (NULL);
		}

	newNode->n = n;
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
