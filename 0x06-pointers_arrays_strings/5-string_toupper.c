#include "main.h"

/**
 * string_toupper - converts the characters of a string to uppercase
 * @str: string to convert
 *
 * Return: converted string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 123)
		{
			str[i] -= 32;
		}
	}

	return (str);
}
