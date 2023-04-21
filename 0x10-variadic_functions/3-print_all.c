#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: format of argument (data_type)
 *
 */

void print_all(const char * const format, ...)
{
	va_list anything;
	int i;
	char *s;

	va_start(anything, format);

	i = 0;
	while (format[i] && format)
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(anything, int));
			break;
		case 'i':
			printf("%d", va_arg(anything, int));
			break;
		case 'f':
			printf("%f", va_arg(anything, double));
			break;
		case 's':
			s = va_arg(anything, char *);
			if (s)
			{
				printf("%s", s);
				break;
			}
			printf("(nil)");
			break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f'
		     || format[i] == 's') && format[i + 1])
			printf(", ");
		i++;
	}
	printf("\n");

	va_end(anything);
}
