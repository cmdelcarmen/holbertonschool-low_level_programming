#include "lists.h"

/**
 *  * free_list - function frees memory
 *   * @head: pointer to first node
 *    */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *pointer;

	while (head != NULL)
	{
		pointer = head->next;
		free(head);
		head = pointer;
	}
}
