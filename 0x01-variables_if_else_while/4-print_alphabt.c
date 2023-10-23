#include <stdio.h>

/**
 * main - Prints all the alphabets excluding q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha[24] = "abcdfghijklmnoprstuvwxyz";
	int z;

	for (z = 0; z < 24; z++)
	{
		putchar(alpha[z]);
	}
	putchar('\n');
	return (0);
}

