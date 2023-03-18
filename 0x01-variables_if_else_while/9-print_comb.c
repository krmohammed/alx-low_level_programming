#include <stdio.h>
/**
 * main - entry point
 * Description - print digits in base 10 and comma separated
 * Return: always 0
 */

int main(void)
{
	int i = 48;
	int space = 32;
	int comma = 44;

	while (i <= 57)
	{
		putchar(i);
		if (i == 57)
		{
			i++;
			continue;
		}
		putchar(comma);
		putchar(space);
		i++;
	}
	putchar('\n');

	return (0);
}
