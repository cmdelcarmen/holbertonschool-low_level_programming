#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table
 * @key: the key we are looking for
 * Return: value associated with element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index = 0;

	while (index < (ht->size))
	{
		if (ht->array[index] != NULL)
		{
			if (strcmp((char *)(ht->array[index]->key), (char *)key) == 0)
			{
				return (ht->array[327]->value);
			}
		}
		index++;
	}
	return (NULL);
}
