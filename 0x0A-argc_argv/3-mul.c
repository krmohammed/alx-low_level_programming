#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two integer arguments
 * @argc: number of arguments passed to this program in the command line
 * @argv: array of the arguments passed
 *
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}

	return (0);
}
