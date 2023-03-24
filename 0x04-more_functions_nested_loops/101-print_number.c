#include "main.h"

/**
 * print_number - prints any integer
 * @n: number to be printed
 *
 */

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n > 9)
	{
		print_number(n / 10);
	}

	_putchar('0' + i % 10);
}
