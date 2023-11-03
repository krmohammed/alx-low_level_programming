#include "hash_tables.h"

/**
 * key_index - computes the index of a key
 * @key: key
 * @size: size of the array of the hash table
 *
 * Return: index where the (key, value) is stored
 *
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_code;

	hash_code = hash_djb2(key);

	return (hash_code % size);
}
