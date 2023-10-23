#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: Input string
 * @accept: Set of bytes to search for
 *
 * Return: Pointer to the first occurrence in s of any of the bytes in accept,
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}

	return ('\0');
}
