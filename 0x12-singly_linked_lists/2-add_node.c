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
 * getLength - function gets length of array
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
 * add_node - function that adds a node at the beginning of a list_t list
 * @head: head pointer
 * @str: name being added to the list
 * Return: the address of the new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tempPointer;

	if (head == NULL)
	{
		return (NULL);
	}

	tempPointer = (list_t *)malloc(sizeof(list_t));
		if (tempPointer == NULL)
		{
			return (NULL);
		}

	tempPointer->str = duplicateString(str);
	tempPointer->len = getLength(str);
	tempPointer->next = *head;

	*head = tempPointer;

	return (tempPointer);
}
