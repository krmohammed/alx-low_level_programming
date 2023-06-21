#include "3-calc.h"

/**
 * main - entry point to the calc program
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: 0 (Always)
 */

int main(int argc, char **argv)
{
	int op1, op2, answer;
	char *operator;
	int (*select_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op1 = atoi(argv[1]);
	op2 = atoi(argv[3]);
	operator = argv[2];
	select_func = get_op_func(operator);

	if (select_func == NULL || argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && op2 == 0)
	{
		printf("Error\n");
		exit(101);
	}

	answer = select_func(op1, op2);
	printf("%d\n", answer);

	return (0);
}
