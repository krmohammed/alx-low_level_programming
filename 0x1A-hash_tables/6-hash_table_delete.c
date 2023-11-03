#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			ptr = ht->array[i];
			while (ptr)
			{
				free(ptr->key);
				free(ptr->value);
				free(ptr);
				ptr = ptr->next;
			}
		}
	}

	free(ht);
}
