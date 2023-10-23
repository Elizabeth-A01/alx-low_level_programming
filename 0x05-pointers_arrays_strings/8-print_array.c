#include "main.h"

/**
 * print_array - Prints n elements of an array.
 * @array: Array name.
 * @size: Number of elements of the array to be printed.
 * Return: void.
 */
void print_array(int *array, int size)
{
	int i;

	for (i = 0; i < (size - 1); i++)
	{
		printf("%d, ", array[i]);
	}

	if (i == (size - 1))
	{
		printf("%d", array[size - 1]);
	}

	printf("\n");
}
