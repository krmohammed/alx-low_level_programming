#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned integer
 * @b: pointer to a binary number
 *
 * Return: u_int if successful, 0 otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	int dec = 0, j, len, conv, temp, i = 0, k, power;

	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;
	for (j = 0; j < len; j++)
	{
		if (b[j] < 48 || b[j] > 49)
			return (0);
	}
	conv = atoi(b);
	while (conv != 0)
	{
		temp = conv % 10;
		if (temp > 1)
			return (0);
		conv /= 10;

		power = 1;		
		for (k = i; k > 0; k--)
			power *= 2;
		dec += temp * power;
		i++;
	}
	return (dec);
}
