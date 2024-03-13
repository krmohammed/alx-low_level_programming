#include "search_algos.h"

/**
 * jump_search - searches for a value using the Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index, -1 if array is NULL or value not found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size), lo = 0, hi = step, i;

	if (array == NULL)
		return (-1);

	while (hi)
	{
		printf("Value checked array[%ld] = [%d]\n", lo, array[lo]);
		if (array[hi] >= value || hi > size - 1)
			break;
		lo = hi;
		hi += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", lo, hi);

	for (i = lo; i <= size - 1; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	
	return (-1);
}
