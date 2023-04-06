#include "main.h"

/**
 * sqrt_calc - helps get the square root of a number
 * @n: number to get its sqrt
 * @curr: current sqrt value
 *
 * Return: the square root
 */

int sqrt_calc(int n, int curr)
{
	if (curr * curr == n)
		return (curr);
	else if (curr * curr > n)
		return (-1);

	return (sqrt_calc(n, curr + 1));
}

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: number to return its square root
 *
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);

	return (sqrt_calc(n, 1));
}
