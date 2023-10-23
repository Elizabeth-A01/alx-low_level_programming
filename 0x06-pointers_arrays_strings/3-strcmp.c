#include "main.h"

/**
 * _strcmp - Compares string values
 * @s1: First string
 * @s2: Second string
 *
 * Return: Difference between the ASCII values of the first
 * differing characters
 */
int _strcmp(char *s1, char *s2)
{
	int index = 0;

	while (s1[index] != '\0' && s2[index] != '\0')
	{
		if (s1[index] != s2[index])
		{
			return (s1[index] - s2[index]);
		}
		index++;
	}

	return (0);
}
