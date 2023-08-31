#include "main.h"

/**
 * get_endianness - checks endianness
 *
 * Return: 1 if big, 0 otherwise
 */

int get_endianness(void)
{
	unsigned int p;
	char *q;

	q = (char *)&p;

	if (*q)
		return (1);
	else
		return (0);
}
