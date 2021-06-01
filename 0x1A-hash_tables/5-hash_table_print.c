#include "hash_tables.h"

/**
 * hash_table_print -function prints out hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int index = 0;
	int comma = 0;

	if (ht == NULL)
		return;

	else
	{
		printf("{");
		while (index < ht->size)
		{
			if (ht->array[index] != NULL)
			{
				while (ht->array[index])
				{
					if (comma == 1)
					{
						printf(", ");
					}
					printf("'%s': '%s'", ht->array[index]->key, ht->array[index]->value);
					comma = 1;

					ht->array[index] = ht->array[index]->next;
				}
			}
			index++;
		}
		printf("}\n");
	}
}
