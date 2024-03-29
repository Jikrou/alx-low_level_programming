#include "main.h"

/**
 * append_text_to_file - append text to the end of the file
 * @filename: name of the file
 * @text_content: text content to append to the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bw = 0;
	size_t l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	while (text_content[l] != '\0')
		l++;

	bw = write(fd, text_content, l);
	if (bw == -1 || bw != (ssize_t)l)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
