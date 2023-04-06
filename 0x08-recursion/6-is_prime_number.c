#include "main.h"

/**
 * is_prime - checks if a number is prime or not
 * @n: number to be checked
 * @div: divisor
 *
 * Return: 1 if prime, 0 otherwise
 */

int is_prime(int n, int div)
{
	if (div == n)
		return (1);
	else if (n % div == 0)
		return (0);

	return (is_prime(n, div + 1));
}

/**
 * is_prime_number - checks for a prime number
 * @n: number to be checked
 *
 * Return: 1if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime(n, 2));
}
