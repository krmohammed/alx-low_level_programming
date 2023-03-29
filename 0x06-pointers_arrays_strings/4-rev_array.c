#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array to reverse
 * @n: size of array
 *
 */

void reverse_array(int *a, int n)
{
	int i = 0, j;

	for (j = n - 1; j > ((n - 2) / 2); j--)
	{
		int temp = a[j];

		a[j] = a[i];
		a[i] = temp;

		i++;
	}

}
