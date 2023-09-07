#include "hash_tables.h"

/**
 * key_index - get the idx for a key in the hash table array
 *
 * @key: the key to be hashed
 * @size: The size of the hash table array
 *
 * Return: The idx at witch the key should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!key || size == 0)
		return (0);

	return (hash_djb2(key) % size);
}
