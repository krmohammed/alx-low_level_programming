#include <stdio.h>
#include <stdlib.h>

/**
 * opcode_printer - prints opcodes of main function
 * @ptr: function pointer
 * @bytes: number of bytes
 *
 */

void opcode_printer(char *ptr, int bytes)
{
	int i;

	for (i = 0; i < bytes; i++)
		printf("%02x", ptr[i] & 0xff);
	printf("\n");
}

/**
 * main - entry point to the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (Always)
 */

int main(int argc, char **argv)
{
	int bytes;
	void (*opcode_ptr)(char *, int);
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	opcode_ptr = opcode_printer;
	ptr = (char *)opcode_ptr;
	opcode_printer(ptr, bytes);

	return (0);
}

