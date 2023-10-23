#include <stdio.h>

/**
 * main - Prints the alphabet, lowercase followed by uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alpha[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int z;

	for (z = 0; z < 52; z++)
	{
		putchar(alpha[z]);
	}
	putchar('\n');
	return (0);
}

