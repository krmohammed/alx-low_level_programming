#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of new file
 * @text_content: content of file
 *
 * Return: 1 on success, -1 otherwise
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t written;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";
	for (len = 0; text_content[len] != '\0'; len++)
		;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	written = write(fd, text_content, len);
	if (written == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
