#include <unistd.h>
/**
 * _putchar - putchar function
 * @z: character to be outputted
<<<<<<< HEAD
 * 
=======
 *
>>>>>>> 752e65109fac8313f23df074f761a392f8b44bbc
 * Return: on success 1, on failure -1
**/
int _putchar(char z)
{
	return (write(1, &z, 1));
}
