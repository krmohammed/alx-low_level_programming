#include "variadic_functions.h"

/**
 * sum_them_all - sums all  arguments of the function
 * @n: number of arguments
 *
 * Return: sum of all arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result;
	va_list to_be_added;

	if (n == 0)
		return (0);

	va_start(to_be_added, n);

	result = 0;
	for (i = 0; i < n; i++)
	{
		result += va_arg(to_be_added, int);
	}

	va_end(to_be_added);

	return (result);
}
