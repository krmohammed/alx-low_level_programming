#include "variadic_functions.h"

/**
 * print_strings - prints strings to stdout
 * @separator: character to separate strings
 * @n: number of arguments
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list to_be_printed;
	char *s;

	va_start(to_be_printed, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(to_be_printed, char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(to_be_printed);

}
