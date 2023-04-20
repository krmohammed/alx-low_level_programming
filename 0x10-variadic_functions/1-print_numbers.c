#include "variadic_functions.h"

/**
 * print_numbers - prints numbers to stdout
 * @separator: character to separate numbers
 * @n: number of arguments
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list to_be_printed;

	va_start(to_be_printed, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(to_be_printed, int));
		if (i != (n - 1) && separator != NULL)
		{
			printf("%c ", *separator);
		}
	}
	printf("\n");

	va_end(to_be_printed);

}
