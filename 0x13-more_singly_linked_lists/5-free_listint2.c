#include "lists.h"

/**
 * free_listint2 - function frees a list
 * @head: pointer to firs node
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
