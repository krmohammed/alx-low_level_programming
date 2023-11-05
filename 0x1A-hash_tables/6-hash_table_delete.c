#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr1, *ptr2;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			ptr1 = ht->array[i];
			while (ptr1)
			{
				ptr2 = ptr1;
				if (ptr1->key)
					free(ptr1->key);
				if (ptr1->value)
					free(ptr1->value);
				free(ptr2);
				ptr1 = ptr1->next;
			}
		}
	}
	free(ht->array);
	free(ht);
}
