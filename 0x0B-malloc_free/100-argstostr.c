#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates command-line arguments into a single string.
 * @ac: The number of command-line arguments.
 * @av: An array of strings representing the arguments.
 *
 * Return: A pointer to a new string containing concatenated arguments.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}

	len += ac;

	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		if (str[k] == '\0')
		{
			str[k++] = '\n';
		}
	}

	return (str);
}
