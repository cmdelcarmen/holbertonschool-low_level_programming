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
	unsigned long int index = 0;

	if ((strcmp(key, "") == 0) || key == NULL || value == NULL || ht == NULL)
		return (0);

	newNode = malloc(sizeof(hash_node_t));
		if (newNode == NULL)
			return (0);

	newNode->key = (char *)key;
	newNode->value = strdup((char *)value);
	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		newNode->next = NULL;
	else
		newNode->next = ht->array[index];


	ht->array[index] = newNode;

	return (1);
}
