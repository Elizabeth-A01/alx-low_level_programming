#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int l_int = 0;

	while (*s != '\0')
	{
		l_int++;
		s++;
	}
	return (l_int);
}
