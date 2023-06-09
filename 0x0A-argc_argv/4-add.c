#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive integers from the cmd line
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (Always)
 */

int main(int argc, char **argv)
{
	int x, y, add = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (x = 1; argv[x] != NULL; x++)
	{
		y = 0;
		while (argv[x][y])
		{
			if (argv[x][y] < '0' || argv[x][y] > '9')
			{
				printf("Error\n");
				return (1);
			}
			y++;
		}
		add += atoi(argv[x]);
	}

	printf("%d\n", add);

	return (0);

