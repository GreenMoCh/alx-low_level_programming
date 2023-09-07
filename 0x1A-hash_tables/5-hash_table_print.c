#include "hash_tables.h"

/**
 * hash_table_print - Print hash table
 *
 * @ht: the hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	int printed = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			if (printed)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			printed = 1;
			current = current->next;
		}
	}
	printf("}\n");
}
