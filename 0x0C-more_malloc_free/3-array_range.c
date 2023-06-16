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
	int i;

	if (min > max)
		return (NULL);

	n_array = malloc(sizeof(int) * (max - min + 1));
	if (n_array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		n_array[i] = min++;
	}

	return (n_array);
}
