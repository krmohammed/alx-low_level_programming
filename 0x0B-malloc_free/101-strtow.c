#include "main.h"

/**
 * strtow - converts a string to words
 * @str: string to be converted
 *
 * Return: pointer to array of strings(words), NULL if failure
 */

char **strtow(char *str)
{
	int i, j, k, len = 0, nwords = 0;
	char **words;

	while (str[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		if (str[i] == ' ' || (i == 0 && str[i - 1] == ' '))
			nwords++;
	}

	words = malloc(nwords + 1);
	if (words == NULL)
		return (NULL);

	for (i = 0, j = 0; j < n; j++)
	{
		while (*str == ' ')
			str++;

		k = 0;
		while (str[k] != ' ' && str[k] != '\0')
			k++;

		words[j] = malloc((k + 1) * sizeof(char));
		if (words[j] == NULL)
		{
			while (--j >= 0)
				free(words[j]);
			free(words);
			return (NULL);
		}

		for (k = 0; *str != ' ' && *str != '\0'; k++)
			words[j][k] = *str++;

		words[j][k] = '\0';
	}
	words[nwords] = NULL;
	return (new_str);
}
