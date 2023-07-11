#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: erminated string to add at the end of the file
 *
 * Return: 1 on success, 0 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t written;

	if (filename == NULL)
		return (-1);

	for (len = 0; text_content[len] != '\0'; len++)
		;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	written = write(fd, text_content, len);
	if (written == -1)
		return (-1);

	close(fd);
	return (1);
}
