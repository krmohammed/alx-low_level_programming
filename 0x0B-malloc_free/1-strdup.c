#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: string to be duplicated
 *
 * Return: pointer to duplicated string on success, NULL otherwise
 */

char *_strdup(char *str)
{
	int len = 0, j;
	char *ss;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	ss = malloc(len);

	for (j = 0; str[j] != '\0'; j++)
	{
		ss[j] = str[j];
	}

	return (ss);
}
