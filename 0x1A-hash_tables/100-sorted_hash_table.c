#include "hash_tables.h"

/**
 * shash_table_create - creates hash table
 * @size: size
 *
 * Return: hashed table, NULL on failure
 *
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sorted_t;
	unsigned long int j = 0;

	if (size == 0)
		return (NULL);
	sorted_t = malloc(sizeof(shash_table_t));
	if (sorted_t == NULL)
		return (NULL);

	sorted_t->size = size;
	sorted_t->shead = NULL;
	sorted_t->stail = NULL;

	sorted_t->array = malloc(sizeof(shash_node_t *) * size);
	if (sorted_t->array == NULL)
	{
		free(sorted_t);
		return (NULL);
	}

	while (j < size)
		sorted_t->array[j++] = NULL;

	return (sorted_t);
}


/**
 * shash_table_set - adds a node to the hashed table
 * sorted format, using chaining collision handling
 *
 * @ht: hash table
 * @key: key
 * @value: value
 *
 * Return: 1 (success), 0 (failure)
 *
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *hn, *ptr;

	if (key == NULL || key[0] == '\0' || ht == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	ptr = ht->array[index];
	while (ptr)
	{
		if (strcmp(ptr->key, key) == 0)
		{
			free(ptr->value);
			ptr->value = strdup(value);
			if (ptr->value == NULL)
				return (0);
			return (1);
		}
		ptr = ptr->next;
	}
	hn = malloc(sizeof(shash_node_t));
	if (hn == NULL)
		return (0);
	hn->key = strdup(key);
	hn->value = strdup(value);
	hn->next = ht->array[index];
	ht->array[index] = hn;

	return (1);
}


/**
 * shash_table_get - gets the value of a key
 * @ht: hash table
 * @key: key
 *
 * Return: value of key
 *
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *ptr;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	ptr = ht->array[index];
	while (ptr)
	{
		if (strcmp(ptr->key, key) == 0)
			return (ptr->value);
		ptr = ptr->next;
	}
	return (NULL);
}


/**
 * shash_table_print - prints a hash_table
 * @ht: hash_table
 *
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *ptr;

	if (ht == NULL)
		return;
	ptr = ht->shead;
	printf("{");
	while (ptr)
	{
		printf("'%s': '%s'", ptr->key, ptr->value);
		if (ptr->snext)
			printf(", ");
		ptr = ptr->snext;
	}
	printf("}\n");
}


/**
 * shash_table_print_rev - reverse printing of hash table
 * @ht: hash table
 *
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *ptr;

	if (ht == NULL)
		return;

	ptr = ht->stail;
	printf("{");
	while (ptr)
	{
		printf("'%s': '%s'", ptr->key, ptr->value);
		if (ptr->sprev)
			printf(", ");
		ptr = ptr->sprev;
	}
	printf("}\n");
}


/**
 * shash_table_delete - deletes a hash table
 * @ht: hash table
 *
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int j;
	shash_node_t *ptr1, *ptr2;

	for (j = 0; j < ht->size; j++)
	{
		ptr1 = ht->array[j];
		while (ptr1)
		{
			ptr2 = ptr1;
			free(ptr2->key);
			free(ptr2->value);
			free(ptr2);
			ptr1 = ptr1->next;
		}
	}
	free(ht->array);
	free(ht);
}
