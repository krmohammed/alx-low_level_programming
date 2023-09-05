#include "main.h"

/**
 * prerr - prints error
 * @sta: exit status number
 * @errm: error message
 * @ex: extra message
 *
 */

void prerr(int sta, char *errm, char *ex)
{
	dprintf(STDERR_FILENO, errm, ex);
	exit(sta);
}

 /**
 * main - copies content of a file to another file
 * @argc: number of cmd line arguments
 * @argv: array of cmd line arguments
 *
 * Return: 0 (Always)
 */

int main(int argc, char **argv)
{
	int fd, td, n_write, n_read, w_close, r_close;
	char buff[1024];

	if (argc != 3)
		prerr(97, "Usage: cp file_from file_to\n", "");
	fd = open(argv[1], O_RDWR);
	if (fd == -1)
		prerr(98, "Error: Can't read from file %s", argv[1]);
	td = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (td == -1)
		prerr(99, "Error: Can't write to %s", argv[2]);
	while ((n_read = read(fd, buff, 1024)) > 0)
	{
		n_write = write(td, buff, n_read);
		if (n_write != n_read)
			prerr(99, "Error: Can't write to %s", argv[2]);
	}
	if (n_read == -1)
		prerr(98, "Error: Can't read from file %s", argv[1]);
	r_close = close(fd);
	if (r_close == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", fd);
		exit(100);
	}
	w_close = close(td);
	if (w_close == -1)
		dprintf(STDERR_FILENO, "Can't close fd %d\n", td);
	return (0);
}
