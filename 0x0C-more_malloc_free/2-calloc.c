#include <stdlib.h>
#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: Memory area to be filled
 * @b: Character to copy
 * @n: Number of times to copy b
 *
 * Return: Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * _calloc - Allocates memory for an array
 * @num_elements: Number of elements in the array
 * @element_size: Size of each element
 *
 * Return: Pointer to allocated memory
 */
void *_calloc(unsigned int num_elements, unsigned int element_size)
{
	char *ptr;

	if (num_elements == 0 || element_size == 0)
		return (NULL);

	ptr = malloc(element_size * num_elements);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, num_elements * element_size);

	return (ptr);
}
