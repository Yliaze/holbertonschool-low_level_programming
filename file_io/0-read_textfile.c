#include "main.h"

/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output
 *
 * @filename: name of the file to read and print
 * @letters: the number of letters to read and print
 *
 * Return: the actual number of letters it could
 * read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_stock;
	ssize_t write_size;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);

	read_stock = read(fd, buf, letters);
	if (read_stock == -1)
		return (0);

	write_size = write(STDOUT_FILENO, buf, read_stock);
	if (write_size == -1 || write_size != read_stock)
		return (0);

	free(buf);
	close(fd);

	return (read_stock);
}
