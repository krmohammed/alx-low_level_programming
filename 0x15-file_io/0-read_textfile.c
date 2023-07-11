#include "main.h"

/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: name of textfile
 * @letters: number of characters to read
 *
 * Return: number of characters read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t written, readd;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	readd = read(fd, buffer, letters);
	if (readd == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	written = write(STDOUT_FILENO, buffer, readd);
	if (written == -1 || written != readd)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (written);
}
