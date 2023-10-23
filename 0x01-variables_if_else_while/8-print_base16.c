#include <stdio.h>

/**
 * main - Prints numbers from zero to 9 then from alphabet a to f
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int z;

	for (z = 48; z < 58; z++)
	{
		putchar(z);
	}
	for (z = 97; z < 103; z++)
	{
		putchar(z);
	}
	putchar('\n');
	return (0);
}
