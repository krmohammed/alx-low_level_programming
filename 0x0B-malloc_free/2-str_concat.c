#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	concat = malloc(len1 + len2 + 1);
	if (concat == NULL)
		return (NULL);

	for (i = 0;  s1[i] != '\0'; i++)
	{
		concat[i] = s1[i];
	}

	for (i = 0; s2[i] != '\0'; i++)
	{
		concat[len1 + i] = s2[i];
	}

	return (concat);
}
