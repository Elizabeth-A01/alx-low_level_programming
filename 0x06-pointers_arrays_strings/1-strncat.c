#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most n bytes from src
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of bytes to concatenate
 *
 * Return: Pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int src_index = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	while (src_index < n && src[src_index] != '\0')
	{
		dest[dest_len] = src[src_index];
		dest_len++;
		src_index++;
	}

	dest[dest_len] = '\0';
	return (dest);
}
