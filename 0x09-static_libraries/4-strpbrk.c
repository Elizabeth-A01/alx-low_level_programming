#include "main.h"

/**
 * _strpbrk - Search a string for any of a set of bytes
 * @s: Input string
 * @accept: String containing the characters to search for
 *
 * Return: Pointer to the first occurrence in s of any character from accept,
 *         or NULL if no matching character is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}

	return ('\0');
}
