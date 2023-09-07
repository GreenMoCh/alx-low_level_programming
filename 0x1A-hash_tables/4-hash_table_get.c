#include "hash_tables.h"

/**
 * hash_table_get - Retrieve a vlaue associated with a key from the hash table
 *
 * @ht: the hash table to search in
 * @key: the key to look for
 *
 * Return: the valie associated with the key, or NULL otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (!ht || !key || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
