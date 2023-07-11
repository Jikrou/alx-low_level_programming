#include "main.h"
/**
 * create_file - a function that creates a file.
 * @filename:  is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return:  1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int r;
	ssize_t len, br = 0;

	if (filename == NULL)
		return (-1);

	r = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (r == -1)
		return (-1);

	len = strlen(text_content) + 1;
	if (len)
		br = write(r, text_content, len);

	close(r);
	return (br == len ? 1 : -1);
}
