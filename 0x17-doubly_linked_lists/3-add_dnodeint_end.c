#include "lists.h"


/**
 *  * add_node_end - function adds node at the end of a list_t list
 *   * @head: pointer to head of node
 *    * @str: string that new node will contain
 *     * Return: pointer to last node
 *      */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *copy, *temp;

	temp = *head;

	while (temp != NULL && temp->next != NULL)
	{
		temp = temp->next;
	}

	copy = malloc(sizeof(dlistint_t));
	if (copy == NULL)
	{
		return (NULL);
	}

	copy->n = n;
	copy->next = NULL;

	if (temp != NULL)
	{
		temp->next = copy;
	}
	if (*head == NULL)
	{
		*head = copy;
	}

	return (copy);
}
