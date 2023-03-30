#include "main.h"

/**
 * cap_string - capitalizes a string
 * @s: string to be capitalized
 *
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	int i, j;
	char d[] = "\n\t (){};,\"?!";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; d[j] != '\0'; j++)
		{
			if (s[i] == d[j] && (s[i + 1] >= 97 && s[i + 1] <= 122))
			{
				s[i + 1] -= 32;
			}
			if (s[i] == '.' && (s[i + 1] >= 97 && s[i + 1] <= 122))
			{
				s[i + 1] -= 32;
			}
		}
	}
	return (s);
}
