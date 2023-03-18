#include <stdio.h>
/**
 * main - entry point
 * Description - print digits in base 10 with putchar
 * Return: always 0
 */

int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
