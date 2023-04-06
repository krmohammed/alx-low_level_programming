#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string whose length is to be calculated
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (_strlen_recursion(s + 1) + 1);
	}
}

/**
 * palindrome_check - checks if a string is the same when reversed
 * @s: string to be checked
 * @a: starting index
 * @z: ending index
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int palindrome_check(char *s, int a, int z)
{
	if (a >= z)
		return (1);
	else if (s[a]  != s[z])
		return (0);

	return (palindrome_check(s, a + 1, z - 1));
}


/**
 * is_palindrome - if a steing is palindrome or not
 * @s: string to be checked
 *
 * Return: 1 if it is, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len <= 1)
		return (1);

	return (palindrome_check(s, 0, len - 1));
}
