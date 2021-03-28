#include "lists.h"

/**
 * add_nodeint_end - function adds a new node at the end of a listint_t
 * @head: pointer to head node
 * @n: data for node
 * Return: pointer to new element or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *temp = *head;

	newNode = malloc(sizeof(listint_t));
		if (newNode == NULL)
		{
			return (NULL);
		}
	newNode->n = n;
	newNode->next = NULL;

	while (temp != NULL && temp->next != NULL)
	{
		temp = temp->next;
	}

	if (temp != NULL)
	{
		temp->next = newNode;
	}

	if (*head == NULL)
	{
		*head = newNode;
	}

	return (newNode);
}
