#include "lists.h"

/**
 * free_list - function frees memory
 * @head: pointer to first node
 */
void free_list(list_t *head)
{
	list_t *pointer;

	while (head != NULL)
	{
		pointer = head->next;
		free(head->str);
		free(head);
		head = pointer;
	}
}
