#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - function to read the .txt file
 * @filename: the name of the .txt file
 * @letters: number of letters in .txt file to be read
 * Return: number of bytes read on success and 0 on failure
**/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_d;
	ssize_t w;
	ssize_t t;

	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	t = read(file_d, buffer, letters);
	w = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(file_d);
	return (w);
}
