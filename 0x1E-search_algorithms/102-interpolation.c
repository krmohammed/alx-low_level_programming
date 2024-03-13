#include "search_algos.h"

/**
 * interpolation_search - searches for a value
 * in a sorted array of integers using the
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index, -1 if array is NULL or value not found
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, pos, high = size - 1;

	if (array == NULL)
		return (-1);

	while (low < high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))* (value - array[low]));

		if (pos <= size - 1)
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
		if (array[pos] > value)
			high = pos - 1;
		else if (array[pos] < value)
			low = pos + 1;
		else
			return (pos);
	}

	return (-1);
}
