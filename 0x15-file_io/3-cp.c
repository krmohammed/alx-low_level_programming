#include "main.h"

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
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	fd = open(argv[1], O_RDWR);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
		exit(98);
	}

	td = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (td == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
		exit(99);
	}

	while ((n_read = read(fd, buff, 1024)) > 0)
	{
		n_write = write(td, buff, n_read);
		if (n_write != n_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
			exit(99);
		}
	}

	if (n_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
		exit(98);
	}

	r_close = close(fd);
	if (r_close == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", fd);
		exit(100);
	}

	w_close = close(td);
	if (w_close == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", td);
	}

	return (0);
}
