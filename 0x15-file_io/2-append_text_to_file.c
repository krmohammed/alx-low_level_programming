#include "main.h"

/**
 * append_text_to_file - appends text at the emd of a file
 * @filename: name of file
 * @text_content: text to be appended
 *
 * Return: 1 (success), -1 (failure)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n_write, str_len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (str_len = 0; text_content[str_len] != '\0'; str_len++)
			;
		n_write = write(fd, text_content, str_len);
		if (n_write == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
