#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht)
{
	unsigned int index = 0;
	hash_node_t node_pointer;

	while(ht->array[index])
	{
		if (ht->array[index])
		{
			while (ht->array[index])
			{
				node_pointer = ht->array[index]->next;
				free(ht->array[index]);
				ht->array[index] = node_pointer;
			}
		}
		else
			free(ht->array[index]);

		index++;
	}
	free(ht->array);
	free(ht);
}
