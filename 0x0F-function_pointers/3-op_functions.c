#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second operand
 *
 * Return: sum of the two integers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: difference of the two integers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: product of the two integers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides one integer by another
 * @a: first integer
 * @b: second integer
 *
 * Return: quotient of the two integers
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - computes modulo
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder of the two integers
 */

int op_mod(int a, int b)
{
	return (a % b);
}
