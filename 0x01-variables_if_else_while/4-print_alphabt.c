#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 1 for success, 0 otherwise
 *
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a == 'e' || a == 'q')
		{
			a++;
			continue;
		}
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
