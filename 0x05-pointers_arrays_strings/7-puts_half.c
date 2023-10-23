#include "main.h"

/**
 * puts_half - Prints half of a string
 * If the length of the string is odd
 * it prints the second half including the middle character.
 * @str: Input string.
 * Return: void.
 */
void puts_half(char *str)
{
	int a, n, l_int;

	l_int = 0;

	for (a = 0; str[a] != '\0'; a++)
		l_int++;

	n = l_int / 2;

	if (l_int % 2 == 1)
		n = (l_int + 1) / 2;

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
