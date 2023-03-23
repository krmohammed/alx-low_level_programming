#include "main.h"

/**
 * print_diagonal - prints a diagonal line with n-size
 * @n: size of diagonal
 *
 */

void print_diagonal(int n)
{
	int j, k;

	for (j = 0; j < n; j++)
	{
		for (k = 0; k < j; k++)
		{
			if (k < (j - 1))
			{
				_putchar(' ');
				continue;
			}
			else
			{
				_putchar('\\');
			}
			_putchar('\n');
		}
	}
}
