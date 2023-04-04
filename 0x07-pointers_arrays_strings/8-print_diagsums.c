#include "main.h"

/**
 * print_diagsums - prints the sum of the diagonals of a matrix
 * @a: pointer to the matrix
 * @size: size of the square matrix
 *
 */

void print_diagsums(int *a, int size)
{
	int sum_lead_diag = 0;
	int sum_trail_diag = 0, i;

	for (i = 0; i < size; i++)
	{
		sum_lead_diag += *(a + (i * size) + i);
		sum_trail_diag += *(a + (i * size) + size - i - 1);
	}

	printf("%d, %d\n", sum_lead_diag, sum_trail_diag);
}
