#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates command line arguments into a single string
 * @ac: number of arguments
 * @av: array of arguments
 * Return: pointer to the concatenated string, or NULL if ac is 0 or av is NULL
 */
char *argstostr(int ac, char **av)
{
	int i, j, length = 0, index = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			length++;
	}

	length += ac;

	str = malloc(sizeof(char) * (length + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[index] = av[i][j];
			index++;
		}
		if (str[index] == '\0')
		{
			str[index++] = '\n';
		}
	}

	return (str);
}
