#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @bytes: Number of bytes to allocate
 *
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int bytes)
{
	void *ptr;

	ptr = malloc(bytes);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
