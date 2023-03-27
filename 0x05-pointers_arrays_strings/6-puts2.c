#include "main.h"

/**
 * puts2 - prints a string to standard output by one step
 * @str: string to print
 *
 */

void puts2(char *str)
{
	int i, len;

	for (len = 0; str[len] != '\0'; len++)
		;

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
