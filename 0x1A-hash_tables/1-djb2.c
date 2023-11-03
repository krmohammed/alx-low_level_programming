#include "hash_tables.h"

/**
 * hash_djb2 - Implementation of the djb2 algorithm
 * @str: string to generate hash code
 *
 * Return: hash_code generated
 *
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash_code = 5381;
	int k;

	while ((k = *str++))
		hash_code = ((hash_code << 5) + hash_code) + k;

	return (hash_code);
}
