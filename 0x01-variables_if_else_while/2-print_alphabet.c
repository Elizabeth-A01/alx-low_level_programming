#include <stdio.h>

/**
 * main - print out the lower case alphabets
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int z;

	for (z = 0; z < 26; z++)
	{
		putchar(alpha[z]);
	}
	putchar('\n');
	return (0);
}
