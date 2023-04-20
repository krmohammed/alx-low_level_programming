#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0 (Always)
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*f_select)(int, int);
	char *operator = argv[2];

	if (argc != 4)
	{
		printf("Error 98\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	f_select = get_op_func(operator);

	if (f_select == NULL)
	{
		printf("Error 99\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error 100\n");
		exit(100);
	}

	result = f_select(num1, num2);
	printf("%d\n", result);

	return (0);
}
