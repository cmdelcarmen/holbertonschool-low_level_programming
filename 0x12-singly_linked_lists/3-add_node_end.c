#include "lists.h"

/**
 * duplicateString - function duplicates string
 * @str: string passed
 * Return: duplicated string
 */
char *duplicateString(const char *str)
{
	char *copiedString;
	int count = 0, arrayLength = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (count = 0; str[count] != '\0'; count++)
	{
		arrayLength++;
	}

	copiedString = malloc(sizeof(char) * (arrayLength + 1));

	if (copiedString == NULL)
	{
		return (NULL);
	}

	for (count = 0; str[count] != '\0'; count++)
	{
		copiedString[count] = str[count];
	}
	copiedString[count] = '\0';

	return (copiedString);
}

/**
 * getLength - function gets length of string
 * @s: string passed
 * Return: length of array
 */
int getLength(const char *s)
{
	int count, arrayLength = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		arrayLength++;
	}

	return (arrayLength);
}

/**
 * add_node_end - function adds node at the end of a list_t list
 * @head: pointer to head of node
 * @str: string that new node will contain
 * Return: pointer to last node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *copy, *temp;

	temp = *head;

	if (str == NULL)
	{
		return (NULL);
	}

	while (temp != NULL && temp->next != NULL)
	{
		temp = temp->next;
	}

	copy = malloc(sizeof(list_t));
		if (copy == NULL)
		{
			return (NULL);
		}

	copy->str = duplicateString(str);
	copy->len = getLength(str);
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
