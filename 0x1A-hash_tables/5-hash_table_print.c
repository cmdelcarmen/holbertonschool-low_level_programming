#include "hash_tables.h"

/**
 * hash_table_print -function prints out hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int index = 0;
	int comma = 1;

	printf("{");
	while (index < ht->size)
	{
		if (ht->array[index] != NULL)
		{
			if (comma == 0)
			{
				printf(", ");
			}
			printf("'%s': '%s'", ht->array[index]->key, ht->array[index]->value);
			comma = 0;
		}
		index++;
	}
	printf("}\n");
}
