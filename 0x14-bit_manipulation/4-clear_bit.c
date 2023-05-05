#include "main.h"

/**
 * clear_bit - sets ths bit at index to 1
 * @n: number
 * @index: index to be set
 *
 * Return: 1 if successful, -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
