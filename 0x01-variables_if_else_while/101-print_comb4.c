#include <stdio.h>
/**
 * main - entry point
 * Description - print double combination of digits
 * Return: always 0
 */

int main(void)
{
	int i;
	int j;
	int k;
	int space = 32;
	int comma = 44;

	for (i = 48; i < 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			for (k = j + 1; k <= 57; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == 55 && j == 56 && k == 57)
				{
					continue;
				}
				putchar(comma);
				putchar(space);
			}
		}
	}
	putchar('\n');

	return (0);
}
