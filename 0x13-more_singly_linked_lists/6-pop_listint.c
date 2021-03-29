#include "lists.h"

/**
 * pop_listint - function deletes the head node of a linked list
 * @head: node to be deleted
 * Return: the head node's date (n) or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL)
	{
		return (0);
	}
	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}
