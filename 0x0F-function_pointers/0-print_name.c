#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name using a function pointer.
 * @name: The name to print.
 * @print_func: Pointer to the printing function.
 *
 * Return: void.
 **/
void print_name(char *name, void (*print_func)(char *))
{
	if (name == NULL || print_func == NULL)
		return;

	print_func(name);
}
