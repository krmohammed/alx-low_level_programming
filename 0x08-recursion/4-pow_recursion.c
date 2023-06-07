#include "main.h"

/**
 * _pow_recursion - computes the 'n' power of a number recursively
 * @x: number
 * @y: power
 *
 * Return: x to the power y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);


	return (x * _pow_recursion(x, --y));
}
