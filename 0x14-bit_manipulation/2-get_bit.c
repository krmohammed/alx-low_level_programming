#include "main.h"

/**
 * get_bit - gets the bit of a binary number at an index
 * @n: integer(to be converted to binary)
 * @index: index of bit
 *
 * Return: value of bit, -1 if failed
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
