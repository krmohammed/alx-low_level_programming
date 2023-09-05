#include "main.h"

/**
 * create_file - creates a file and writes into it
 * @filename: name of file
 * @text_content: text to be written into the file
 *
 * Return: 1 on success, -1 otherwise
 */

int create_file(const char *filename, char *text_content)
{
	int fd, n_write, str_len;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	for (str_len = 0; text_content[str_len] != 0; str_len++)
		;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	n_write = write(fd, text_content, str_len);
	if (n_write == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}
