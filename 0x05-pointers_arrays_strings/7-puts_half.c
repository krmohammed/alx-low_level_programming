#include "main.h"

/**
 * puts_half - printd the second half of a string
 * @str: string to be printed
 *
 */

void puts_half(char *str)
{
	int len, n;

	for (len = 0; str[len] != '\0'; len++)
		;

	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len - 1) / 2;
	}

	for (; n < len; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
