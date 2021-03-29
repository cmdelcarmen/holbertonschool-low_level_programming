#include "lists.h"

/**
 * insert_nodeint_at_index - function that insets a new node
 * at a given position
 * @head: head of node
 * @idx: index to insert node at
 * @n: data for node
 * Return: NULL or new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *newNode;
	unsigned int count = 1;

	temp = *head;

	while (temp != NULL)
	{
		if (idx == 0)
		{
			newNode = malloc(sizeof(listint_t));
				if (newNode == NULL)
					return (NULL);

			newNode->n = n;
			newNode->next = *head;
			*head = newNode;
			return (newNode);
		}
		if (count == idx)
		{
			newNode = malloc(sizeof(listint_t));
				if (newNode == NULL)
					return (NULL);

			newNode->n = n;
			newNode->next = temp->next;
			temp->next = newNode;
			return (newNode);
		}
		temp = temp->next;
		count++;
	}
	if (idx > count)
		return (NULL);

	return (0);
}
