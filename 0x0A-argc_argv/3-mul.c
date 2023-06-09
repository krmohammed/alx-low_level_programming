#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two cmd args and displays the result
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (Always)
 */

int main(int argc, char **argv)
{
	int result;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);

	return (0);
}
