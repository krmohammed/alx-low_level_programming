#include "main.h"

/**
 * create_array - creates an array
 * @size: size of array
 * @c: char to initialize
 *
 * Return: poiner to array, NULL otherwise
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		arr[i++] = c;
	}

	return (arr);
}
