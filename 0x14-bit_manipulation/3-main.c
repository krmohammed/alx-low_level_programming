#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int n;

	n = 10;
	set_bit(&n, 1);
	printf("%lu\n", n);
	n = 0;
	set_bit(&n, 10);
	printf("%lu\n", n);
	n = 98;
	set_bit(&n, 0);
	printf("%lu\n", n);
	return (0);
}
