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

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
