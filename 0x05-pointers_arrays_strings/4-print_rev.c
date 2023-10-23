#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: String
 * Return: void
 */
void print_rev(char *s)
{
	int l_int = 0;
	int o;

	while (*s != '\0')
	{
		l_int++;
		s++;
	}
	s--;
	for (o = l_int; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
