#include <stdio.h>
#include <stdlib.h>

/**
 * main - computes change in cents
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (Always)
 */

int main(int argc, char **argv)
{
	int change = 0, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else
			cents -= 1;

		change++;
	}

	printf("%d\n", change);

	return (0);
}
