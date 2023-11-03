#include "hash_tables.h"

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash_code = 5381;
	int k;
	
	while ((k = *str++))
		hash_code = ((hash_code << 5) + hash_code) + k;

	return (hash_code);
}
