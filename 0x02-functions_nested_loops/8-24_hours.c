#include "main.h"

/**
 * jack_bauer - prints all the time
 *
 */

void jack_bauer(void)
{
	int i = 0, j, k, l;

	while (i < 51)
	{
		while (j < 52)
		{
			while (k < 54)
			{
				while (l <= 57)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
