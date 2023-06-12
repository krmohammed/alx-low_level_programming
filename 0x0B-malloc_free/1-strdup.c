#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string, NULL otherwise
 */

char *_strdup(char *str)
{
	int i, len;
	char *str_dup;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		;

	str_dup = malloc(sizeof(char) * len + 1);
	if (str_dup == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		str_dup[i] = str[i];
	}
	str_dup[i] = '\0';

	return (str_dup);
}
