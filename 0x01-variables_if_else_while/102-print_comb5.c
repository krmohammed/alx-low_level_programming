#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description - combination of two digits numbers
 * Return: always 0
 */

int main(void)
{
	int i;
	int j;
	int space = 32;
	int comma = 44;

	for (i = 0; i <= 98; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(32);
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (i == 98 && j == 99)
			{
				continue;
			}
			putchar(comma);
			putchar(space);
		}
	}
	putchar('\n');

	return (0);
}
