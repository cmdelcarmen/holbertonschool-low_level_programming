#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *  * main - check the code for Holberton School students.
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	listint_t *head;

	head = NULL;

	free_listint2(NULL);
	printf("%p\n", (void *)head);
	return (0);
}
