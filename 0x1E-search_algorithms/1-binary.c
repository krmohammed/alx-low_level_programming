#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array using Binary search
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index of value, -1 if array is NULL or value not present
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, middle, i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		middle = (right + left) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
				printf(", ");
		}
		printf("\n");


		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
	}

	return (-1);
}
