#include "hash_tables.h"

/**
 * hash_table_create - function creates a hash table
 * @size: size of array
 * Return: A pointer to the newly created table or NULL if it failed.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int idx;

	table = malloc(sizeof(hash_table_t));
		if (table == NULL)
			return (NULL);

	table->array = malloc(sizeof(hash_node_t *) * size);
		if (table->array == NULL)
			return (NULL);

	for (idx = 0; idx < size; idx++)
		table->array[idx] = NULL;

	return (table);
}
