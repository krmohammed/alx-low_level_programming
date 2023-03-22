#include "main.h"

/**
 * jack_bauer - prints all the time
 *
 */

void jack_bauer(void)
{
	int i = 48, j, k, l;

	while (i < 51)
	{
		j = 48;
		while (j < 52)
		{
			if ((i == 50) && (j == 52))
			{
				break;
			}
			k = 48;
			while (k < 54)
			{
				l = 48;
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
