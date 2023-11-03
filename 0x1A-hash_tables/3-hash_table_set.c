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

	if (key == NULL || key[0] == '\0' || value == NULL || ht == NULL)
		return (0);
	hn = malloc(sizeof(hash_node_t));
	if (hn == NULL)
		return (0);
	hn->key = strdup(key);
	if (hn->key == NULL)
	{
		free(hn);
		return (0);
	}
	hn->value = strdup(value);
	if (hn->value == NULL)
	{
		free(hn->key);
		free(hn);
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index])
	{
		hn->next = ht->array[index];
		ht->array[index] = hn;
	}
	else
		ht->array[index] = hn;

	return (1);
}
