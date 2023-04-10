#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds all integer arguments
 * @argc: number of arguments passed to this program in the command line
 * @argv: array of the arguments passed
 *
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{
	int i, sum = 0, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		j = 0;

		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}

			j++;
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
