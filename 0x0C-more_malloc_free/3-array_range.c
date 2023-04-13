#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: starting value
 * @max: endinh value
 *
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int i, j;
	int *new_arr;

	if (min > max)
		return (NULL);

	new_arr = malloc((max - min + 1) * sizeof(int));
	if (new_arr == NULL)
		return (NULL);

	for (i = min, j = 0; i <= max; i++, j++)
	{
		new_arr[j] = i;
	}

	return (new_arr);
}
