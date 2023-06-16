#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *new_str;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	new_str = malloc(nmemb * size);
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		new_str[i] = 0;

	return (new_str);
}
