#include <stdio.h>
/**
 * main - entry point
 * Description - printing hexadecimal numbers
 * Return: 1 if successful, 0 otherwise
 *
 */

int main(void)
{
	int a = 48;
	char b = 'a';

	while (a <= 57)
	{
		putchar(a);
		a++;
	}

	while (b <= 'f')
	{
		putchar(b);
		b++;
	}
	putchar('\n');

	return (0);
}
