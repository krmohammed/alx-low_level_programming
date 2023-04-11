#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: character to initialize array
 *
 * Return: array, NULL if failure
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(char) * size);

	if (size == 0 || arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
