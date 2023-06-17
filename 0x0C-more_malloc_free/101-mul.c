#include "main.h"


/**
 * _isdigit - checks if an integer is a digit or not
 * @c: integer to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * print_err - prints an error message
 */

void print_err(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
}

/**
 * is_valid_num - checks for the validity of a number
 * @n: number
 *
 * Return: 1 if number, 0 otherwise
 */

int is_valid_num(char *n)
{
	while (*n)
	{
		if (_isdigit(*n))
			return (1);
		n++;
	}
	return (0);
}

/**
 * mul - multiplies two positive numbers
 * @n1: first number
 * @n2: second number
 *
 */

void mul(char *n1, char *n2)
{
	int len, len1 = 0, len2 = 0, x, y, c = 0, num1, num2, sum;
	int *res;

	while (n1[len1])
		len1++;
	while (n2[len2])
		len2++;

	len = len1 + len2;
	res = calloc(len, sizeof(int));
	if (res == NULL)
	{
		print_err();
		exit(98);
	}
	for (x = len1 - 1; x >= 0; x--)
	{
		c = 0;
		for (y = len2 - 1; y >= 0; y--)
		{
			num1 = n1[x] - '0';
			num2 = n2[y] - '0';
			sum = num1 * num2 + res[x + y + 1] + c;

			c = sum / 10;
			res[x + y + 1] = sum % 10;
		}
		res[x] += c;
	}

	x = 0;
	while (res[x] == 0 && x < len - 1)
		x++;

	while (x < len)
	{
		_putchar(res[x++] + '0');
	}
	_putchar('\n');
	free(res);
}

/**
 * main - tests the functions above
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: 0 (Always)
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		print_err();
		exit(98);
	}

	if (!is_valid_num(argv[1]) || !is_valid_num(argv[2]))
	{
		print_err();
		exit(98);
	}

	mul(argv[1], argv[2]);

	return (0);
}
