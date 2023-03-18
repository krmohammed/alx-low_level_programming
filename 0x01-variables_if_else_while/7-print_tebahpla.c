#include <stdio.h>
/**
 * main - entry point
 * Description - prints the alphabets in reverse order
 * Return: always 0
 */

int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');

	return (0);
}
