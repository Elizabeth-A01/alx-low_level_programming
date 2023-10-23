#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of characters to copy
 *
 * Return: Pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int src_index = 0;
	int dest_index = 0;

	while (src_index < n && src[src_index] != '\0')
	{
		dest[dest_index] = src[src_index];
		src_index++;
		dest_index++;
	}

	while (dest_index < n)
	{
		dest[dest_index] = '\0';
		dest_index++;
	}

	return (dest);
}
