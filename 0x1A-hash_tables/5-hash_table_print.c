#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, comma = 0;
	hash_node_t *tmp;

	if (ht == NULL)
		return;

	printf("{");
	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if (comma)
				printf(", ");
			else
				comma = 1;
			printf("'%s': '%s'", tmp->key, tmp->value);
			if (tmp->next)
				printf(", ");
			tmp = tmp->next;
		}
		i++;
	}
	printf("}\n");
}
