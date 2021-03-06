#include "lists.h"

/**
 * sum_listint - functin returns the sum of all the data of a linked list
 * @head: pointed to head node
 * Return: the sum of all data
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
