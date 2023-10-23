#include "main.h"
/**
 * create_file - function to create a file
 * @filename: the name of file
 * @text_content: string of characters to be writen
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_d;
	int num_letters;
	int rw;

	if (!filename)
	{
		return (-1);
	}
	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_d == -1)
	{
		return (-1);
	}
	if (!text_content)
	{
		text_content = "";
	}

	for (num_letters = 0; text_content[num_letters]; num_letters++)
		;

	rw = write(file_d, text_content, num_letters);

	if (rw == -1)
	{
		return (-1);
	}

	close(file_d);

	return (1);
}
