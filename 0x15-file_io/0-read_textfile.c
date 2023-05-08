#include "main.h"

/**
 * read_textfile - reads a textfile and prints it to stdout
 * @filename: name of textfile
 * @letters: number of letters to read
 *
 * Return: number of letters read on success, 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t n_read, n_write;

	buff = malloc(sizeof(char) * letters + 1);
	if (buff == NULL || filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	n_read = read(fd, buff, letters);
	n_write = write(1, buff, letters);

	if (n_write == -1)
		return (0);

	close(fd);

	return (n_read);
}
