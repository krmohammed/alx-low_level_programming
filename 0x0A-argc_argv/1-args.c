#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments at standard input of the program to
          standard output
 * @argc: number of arguments passed to this program in the command line
 * @argv: array of the arguments passed
 *
 * Return: 0 Always
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);

	return (0);
}
