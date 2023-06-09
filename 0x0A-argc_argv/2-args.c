#include <stdio.h>

/**
 * main - prints the all cmd args of the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (Always)
 */

int main(int argc, char *argv[])
{
	int itr;

	(void)argc;

	itr = 0;
	while (argv[itr])
	{
		printf("%s\n", argv[itr++]);
	}


	return (0);
}
