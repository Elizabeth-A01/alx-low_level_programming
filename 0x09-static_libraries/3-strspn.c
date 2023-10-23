#include "main.h"

/**
 * _strspn - Get the length of a prefix substring
 * @s: Input string
 * @accept: String containing the characters to match
 *
 * Return: Number of characters in the initial segment of s that match accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i, j;
	int match;

	for (i = 0; s[i] != '\0'; i++)
	{
		match = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				match = 1;
				break;
			}
		}
		if (match == 0)
			break;
		n++;
	}

	return (n);
}
