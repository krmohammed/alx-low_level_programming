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
	char *output;
	int m, j, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
                ;

	output = malloc(sizeof(char) * (len1 + len2) + 1);
	if (output == NULL)
		return (NULL);

	m = 0;
	while (s1[m] != '\0')
	{
		output[m] = s1[m];
		m++;
	}

	j = 0;
	while (s2[j] != '\0')
        {
                output[m++] = s2[j];
                j++;
        }

	output[m] = '\0';

	return (output);
}
