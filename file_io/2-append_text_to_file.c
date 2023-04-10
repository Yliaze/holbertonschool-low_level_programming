#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: name of the file to create
 * @text_content: NULL terminated string
 * to write to the file
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w_fd, len;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	for (len = 0; text_content[len] != '\0'; len++)
		;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	w_fd = write(fd, text_content, len);
	if (w_fd == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}
