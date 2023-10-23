#include "main.h"
/**
 * flip_bits - record number of bits to be flipped
 * to get from one number to another to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to be flipped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	int z = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			z++;
	}

	return (z);
}

