#include "main.h"
/**
 * get_bit - function to get bit
 * @n: number to look through
 * @index: index
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val_bit;

	if (index > 63)
		return (-1);
	val_bit = (n >> index) & 1;

	return (val_bit);
}
