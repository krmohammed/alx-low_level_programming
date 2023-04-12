#include "main.h"

/**
 * argstostr - concatenates all arguments
 * @ac: size of arguments
 * @av: arguments
 *
 * Return: pointer to concatenated string, NULL if failure
 */

char *argstostr(int ac, char **av)
{
	char *catt;
	int len = 0, i, j, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			len++;
			j++;
		}
		len++;
	}

	catt = malloc(len + 1);
	if (catt == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			catt[k] = av[i][j];
			k++;
		}
		catt[k++] = '\n';
	}
	catt[k] = '\0';

	return (catt);
}
