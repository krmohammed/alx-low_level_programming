#include <stdio.h>
#include <stdlib.h>

void opcode_printer(char *pointer, int n_bytes);

/**
 * main - displays opcode to stdout
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: (0) Always
 */

int main(int argc, char *argv[])
{
	int n_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n_bytes = atoi(argv[1]);

	if (n_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	void (*print_opcode)(char*, int) = &opcode_printer;
	char *pointer = (char *)print_opcode;

	print_opcode(pointer, n_bytes);

	return (0);
}

/**
 * opcode_printer - prints opcode of the main function
 * @pointer: pointer to start of block of memory
 * @n_bytes: number of bytes to print
 *
 */

void opcode_printer(char *pointer, int n_bytes)
{
	int i;

	for (i = 0; i < n_bytes; i++)
	{
		printf("%02x ", pointer[i] && 0xff);
	}
	printf("\n");
}
