#include "main.h"

/**
 * puts2 - Prints every other character starting from the first character.
 * @str: Input string.
 * Return: void.
 */
void puts2(char *str)
{
	int l_int = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		l_int++;
	}
	t = l_int - 1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
