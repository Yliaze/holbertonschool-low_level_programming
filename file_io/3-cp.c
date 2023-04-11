#include "main.h"

/**
 * main - copies the content of a file to another file
 *
 * @argc: number of command line arguments
 * @argv: array containing command line arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, close_from, close_to;
	char buf[1024];
	ssize_t read_fd, write_fd;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	read_fd = read(fd_from, buf, 1024);
	if (read_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	write_fd = write(fd_to, buf, 1024);
	if (write_fd == -1 || write_fd != read_fd)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	close_from = close(fd_from);
	if (close_from)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	close_to = close(fd_to);
	if (close_to)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}
