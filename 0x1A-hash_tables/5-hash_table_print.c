#include "hash_tables.h"

/**
 * hash_table_print -function prints out hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int index = 0;

	printf("{");
	while (index < ht->size)
	{
		if (ht->array[index] != NULL)
		{
			printf("'%s': '%s'", ht->array[index]->key, ht->array[index]->value);
			if (ht->array[index + 1] != NULL)
				printf(", ");
		}
		index++;
	}
	printf("}\n");
}
