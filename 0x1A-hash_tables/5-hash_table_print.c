#include "hash_tables.h"

/**
 *  * hash_table_print - prints a hash table
 *   * @ht: hast table to print
 *    */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int flag = 0;
	hash_node_t *temp;

	if (ht)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			temp = ht->array[i];
			while (temp != NULL)
			{
				if (flag == 0)
				{
					printf("\'%s\': \'%s\'", temp->key, temp->value);
					flag = 1;
				}
				else
					printf(", \'%s\': \'%s\'", temp->key, temp->value);
				temp = temp->next;
			}
		}
		printf("}\n");
	}
}
