#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: beginning
 * @max: ending
 *
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *n_array;
	int i, j = 0;

	if (min > max)
		return (NULL);

	n_array = malloc(sizeof(int) * (max - max + 1));
	if (n_array == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		n_array[j++] = i;
	}

	return (n_array);
}
