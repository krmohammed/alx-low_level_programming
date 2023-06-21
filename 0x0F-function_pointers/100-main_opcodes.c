#include <stdio.h>
#include <stdlib.h>

/**
 * opcode_printer - prints opcodes of main function
 * @bytes: number of bytes
 *
 */

void opcode_printer(int bytes);

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

	opcode_printer(bytes);

	return (0);
}

void opcode_printer(int bytes)
{
        int i;
        unsigned char *main_ptr = (unsigned char *)main;

        for (i = 0; i < bytes; i++)
                printf("%02x ", main_ptr[i]);
        printf("\n");
}
