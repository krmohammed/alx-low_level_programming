#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned integer
 * @b: pointer to a binary number
 *
 * Return: u_int if successful, 0 otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	int dec = 0, j, len, power;

	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;

	power = 1;
	for (j = len - 1; b[j] != '\0'; j--)
	{
		if (j == len - 1)
			power = 1;
		else
			power *= 2;
		if (b[j] == '1' || b[j] == '0')
		{
			dec += power * (b[j] - '0');
		}
		else
			return (0);
	}
	return (dec);
}
