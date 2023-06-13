#include "main.h"

/**
 * argstostr -  concatenates all the arguments of a program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to concatenated string
 */

char *argstostr(int ac, char **av)
{
	char *new;
	int i, j, k, av_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			av_len++;
		}
		av_len++;
	}

	new = malloc((sizeof(char) * av_len) + 1);
	if (new == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			new[k++] = av[i][j];
		}
		new[k++] = '\n';
	}

	return (new);
}
