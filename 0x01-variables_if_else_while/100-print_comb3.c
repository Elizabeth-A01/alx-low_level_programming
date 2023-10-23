#include <stdio.h>

/**
 * main - prints all possible different combinations
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int y, z;

	for (y = 48; y <= 56; y++)
	{
		for (z = 49; z <= 57; z++)
		{
			if (z > y)
			{
				putchar(y);
				putchar(z);
				if (y != 56 || z != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
