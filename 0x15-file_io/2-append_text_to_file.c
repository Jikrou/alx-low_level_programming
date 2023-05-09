#include "main.h"
/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename:  the name of the file
 * @text_content: text to be appended
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int r;
	ssize_t len;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	r = open(filename, O_WRONLY | O_APPEND);
	if (r == -1)
		return (-1);

	len = strlen(text_content);
	if (write(r, text_content, len) != len)
	{
		close(r);
		return (-1);
	}

	close(r);
	return (1);
}
