#include "search_algos.h"

/**
 * exponential_search -  searches for a value in a sorted array
 * of integers using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index, -1 if array is NULL or value not found
 *
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t hi = 1, lo = 0;

	if (array == NULL)
		return (-1);

	while (hi < size && array[hi] < value)
	{
		printf("Value checked array[%ld]: [%d]\n", hi, array[hi]);
		lo = hi;
		hi *= 2;
	}
	if (hi >= size)
		hi = size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", lo, hi);

	return (binary_search2(array, lo, hi, value));
}



/**
 * binary_search2 - searches for a value in a sorted array using Binary search
 * @array: a pointer to the first element of the array to search in
 * @lo: first element of array (or sub array)
 * @hi: last element of array (or sub array)
 * @value: value to search for
 *
 * Return: index of value, -1 if array is NULL or value not present
 */

int binary_search2(int *array, size_t lo, size_t hi, int value)
{
	size_t middle, i;

	if (array == NULL)
		return (-1);

	while (lo <= hi)
	{
		middle = (hi + lo) / 2;
		printf("Searching in array: ");
		for (i = lo; i <= hi; i++)
		{
			printf("%d", array[i]);
			if (i != hi)
				printf(", ");
		}
		printf("\n");


		if (array[middle] < value)
			lo = middle + 1;
		else if (array[middle] > value)
			hi = middle - 1;
		else
			return (middle);
	}

	return (-1);
}
