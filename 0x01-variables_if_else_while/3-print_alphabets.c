#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 1 if successful, 0 otherwise
 *
 */

int main(void)
{
	char a = 'a';
	char b = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');

	return (0);
}
