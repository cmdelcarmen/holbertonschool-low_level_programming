#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * key_index - function gives you the key of an index
 * @key: key is the key
 * @size: the size of the array of the hash table
 * Returns: the index at which the key/value pair
 * should be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx, length, hash_idx = 5381 * 33;

	printf("size: %lu\n", size);

	/*gets length of key*/
	for(length = 0; key[length]; length++);

	for(idx = 0; key[idx]; idx++)
	{
		hash_idx += key[idx];
	}
	return (hash_idx % size);
}
