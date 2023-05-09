#include "main.h"
/**
 * err_msg - prints error message
 * @msg: error message
 * @arg: argument
 * @code: exit status code
 */
void err_msg(char *msg, char *arg, int code)
{
	dprintf(STDERR_FILENO, msg, arg);
	exit(code);
}
/**
 * main - copies content of a file to another file
 * @argc: number of cmd line arguments
 * @argv: array of cmd line arguments
 * Return: 0 (Always)
 */
int main(int argc, char **argv)
{
	int fd, td, n_write, n_read;
	char buff[1024];

	if (argc != 3)
		err_msg("Usage: %s file_from file_to\n", argv[0], 97);
	fd = open(argv[1], O_RDWR);
	if (fd == -1)
		err_msg("Error: Can't read from file %s", argv[1], 98);
	td = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (td == -1)
		err_msg("Error: Can't write to %s", argv[2], 99);

	while ((n_read = read(fd, buff, 1024)) > 0)
	{
		n_write = write(td, buff, n_read);
		if (n_write != n_read)
			err_msg("Error: Can't write to %s\n", argv[2], 99);
	}
	if ((write(td, "\n", 1)) != 1)
		err_msg("Error: Can't write to %s", argv[2], 99);
	if (n_read == -1)
		err_msg("Error: Can't read from file %s\n", argv[1], 98);
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", fd);
		exit(100);
	}

	if (close(td) == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", td);
		exit(100);
	}

	return (0);
}
