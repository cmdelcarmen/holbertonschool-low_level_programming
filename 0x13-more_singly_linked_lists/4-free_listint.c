#include "lists.h"

/**
 * free_listint - function frees a list
 * @head: pointer passed to function
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
