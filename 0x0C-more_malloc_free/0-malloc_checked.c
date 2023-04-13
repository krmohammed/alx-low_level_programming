#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: bytes to be allocated
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *allo_mem = malloc(b);

	if (allo_mem == NULL)
		exit(98);

	return (allo_mem);
}
