#include "main.h"
/**
 * read_textfile - reads a textfile and prints it to stdout
 * @filename: name of textfile
 * @letters: number of letters to read
 * Return: number of letters read on success, 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t n_read, n_write;

	if (filename == NULL)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	n_read = read(fd, buff, letters);
	if (n_read == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	n_write = write(1, buff, n_read);
	if (n_write == -1 || n_write != n_read)
	{
		free(buff);
		close(fd);
		return (0);
	}
	free(buff);
	close(fd);
	return (n_write);
}
