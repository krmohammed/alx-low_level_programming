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
	}

	if (n > 9)
	{
		print_number(i / 10);
	}

	_putchar(i % 10 + '0');
}
