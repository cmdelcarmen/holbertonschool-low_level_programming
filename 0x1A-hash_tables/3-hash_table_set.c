#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - function add an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key, cannot be an empty string
 * @value: the value associated with the key, value must be duplicated,
 * value can be an empty string
 * Return: 1 on sucess, 0 on fail
 *
 * Incase of collision, adds the new node at the beginning of the list
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode = NULL;
	char *keyCopy, *valueCopy;
	unsigned long int index = 0;

	if ((strcmp(key, "") == 0) || key == NULL || value == NULL || ht == NULL)
		return (0);

	keyCopy = strdup(key);
	valueCopy = strdup(value);

	/*creating new node*/
	newNode = malloc(sizeof(hash_node_t));
		if (newNode == NULL)
			return (0);
	newNode->key = keyCopy;
	newNode->value = valueCopy;

	/*find what index the key/value pair will go in*/
	index = key_index((const unsigned char *)key, ht->size);

	/*determing value of newNode->next*/
	if (ht->array[index] == NULL)
		newNode->next = NULL;
	else
	{
		free(newNode);
		free(keyCopy);
		ht->array[index]->value = valueCopy;
		return (1);
	}

	/*inserting newNode into array*/
	ht->array[index] = newNode;

	return (1);
}
