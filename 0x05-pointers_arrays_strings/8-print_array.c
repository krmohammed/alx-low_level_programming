#include "main.h"

/**
 * print_array - prints n number of elements of an array
 * @a: the array
 * @n: number of elements
 *
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);

		if (j != n - 1)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
