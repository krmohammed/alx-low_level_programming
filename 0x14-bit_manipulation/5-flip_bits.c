#include "main.h"

/**
 * flip_bits - calculates number of bits needed to flip to get a number
 * @m: integer
 * @n: interger
 *
 * Return: number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exclusive_m_n;
	unsigned int flipped;

	flipped = 0;
	exclusive_m_n = m ^ n;

	while (exclusive_m_n != 0)
	{
		flipped += exclusive_m_n & 1;
		exclusive_m_n >>= 1;
	}

	return (flipped);
}
