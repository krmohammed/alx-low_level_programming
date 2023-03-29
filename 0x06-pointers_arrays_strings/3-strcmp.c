#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: difference in integer value of the two strings
 */

int _strcmp(char *s1, char *s2)
{
	int s_1 = 0, s_2 = 0, i, j;

	for (i = 0; s1[i] != '\0'; i++)
	{
		s_1 += s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		s_2 += s2[j];
	}

	return (s_1 - s_2);
}
