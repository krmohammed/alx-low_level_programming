#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: array of chessboard
 *
 */

void print_chessboard(char (*a)[8])
{
	int p, q;

	for (p = 0; p < 8; p++)
	{
		for (q = 0; q < 8; q++)
		{
			_putchar(a[p][q]);

			if (q == 7)
				_putchar('\n');
		}
	}
}
