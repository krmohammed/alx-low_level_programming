#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: numver of array elements
 * @size: size of nmemb
 *
 * Return: pointer to allocated memory, NULL if it fail
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *c_alloc = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (c_alloc == NULL)
		return (NULL);


	for (i = 0; i < nmemb; i++)
	{
		c_alloc[i] = 0;
	}

	return (c_alloc);
}
