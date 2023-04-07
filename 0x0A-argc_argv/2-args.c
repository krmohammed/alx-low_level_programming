#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments at command line of the program
 * @argc: number of arguments passed to this program in the command line
 * @argv: array of the arguments passed
 *
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
