#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string whose length is to be calculated
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	static int len = 0;

	if (*s == '\0')
	{
		return (len);
	}

	len++;
	_strlen_recursion(s + 1);

	return (len);
}
