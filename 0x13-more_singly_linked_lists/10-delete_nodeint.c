#include "lists.h"

/**
 * delete_nodeint_at_index - function deletes the nodes at index linked list
 * @head: pointer to head of node
 * @index: node you want to delete
 * Return: 1 if its succeded and -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *delete;
	unsigned int count = 1;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	temp = *head;

	while (temp != NULL)
	{
		if (index == 0)
		{
			*head = (*head)->next;
			free(temp);
			return (1);
		}

		if (count == index)
		{
			delete = temp->next;
			temp->next = delete->next;
			free(delete);
			return (1);
		}
		temp = temp->next;
		count++;
	}
	if (index > count)
	{
		return (-1);
	}
	return (-1);
}
