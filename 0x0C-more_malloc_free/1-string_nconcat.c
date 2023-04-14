#include "main.h"

/**
 * string_nconcat - concatenates n number of bytes to another string
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i;
	char *nconcat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	nconcat = malloc(len1 + n + 1);
	if (nconcat == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		nconcat[i] = s1[i];
	}

	if (n >= len2)
	{
		for (i = 0; i < len2 && s2[i] != '\0'; i++)
		{
			nconcat[len1 + i] = s2[i];
		}
		nconcat[len1 + i] = '\0';
	}
	for (i = 0; i < n && s2[i] != '\0'; i++)
	{
		nconcat[len1 + i] = s2[i];
	}
	nconcat[len1 + i] = '\0';

	return (nconcat);
}
