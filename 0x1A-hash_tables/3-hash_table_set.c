#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value of the key
 *
 * Return: 1 on success, 0 otherwise
 *
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *hn;
	
	if (key == NULL)
		return (0);
	hn = malloc(sizeof(hash_node_t));
	if (hn == NULL)
		return (0);
	hn->key = (char *)key;
	hn->value = strdup(value);

	index = key_index((const unsigned char *)key, ht->size);

	return (1);
}
