#include "main.h"

/**
 * _memcpy - Copies a memory area
 * @dest: Destination memory where data is copied
 * @src: Source memory to be copied
 * @n: Number of bytes to be copied
 *
 * Return: Pointer to the destination memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = n;
	int r = 0;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
