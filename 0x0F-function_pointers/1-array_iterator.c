#include "function_pointers.h"

/**
 * array_iterator - iterates through an array
 * @array: array
 * @size: size of array
 * @action: action to perform on each array element
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
