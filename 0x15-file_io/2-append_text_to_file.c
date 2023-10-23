#include "main.h"
/**
 * append_text_to_file - appends text to the end of .txt file
 * @filename: filename
 * @text_content: string of character to be added
 *
 * Return: 1 on success(file exists), -1 on failure(file non-exists)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int num_letters;
	int rw;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		for (num_letters = 0; text_content[num_letters]; num_letters++)
			;

		rw = write(fd, text_content, num_letters);

		if (rw == -1)
			return (-1);
	}

	close(fd);

	return (1);
}

