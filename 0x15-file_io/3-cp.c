#include "main.h"

/**
 * main - copies content of a file to another file
 * @argc: number of cmd line arguments
 * @argv: array of cmd line arguments
 *
 * Return: 0 (Always)
 */

int main(int argc, char **argc)
{
	int fd, td, n_write, n_read;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
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

	n_read = read(fd, buff, 1024);
	if (n_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
		exit(98);
	}

	n_write = write(td, argv[2], n_read);
	if (n_write == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[2]);
		exit(99);
	}

	close(td);
	close(fd);

	return (0);
}
