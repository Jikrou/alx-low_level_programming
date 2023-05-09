#include "main.h"
/**
 * create_file -  a function that creates a file.
 * @filename: pointer to the file name
 * @text_content: pointer to the string in the file
 * Return: 1 on success and -1 if it fails
*/
int create_file(const char *filename, char *text_content)
{
	int r;
	char *b;
	int len;

	if (filename == NULL)
		return (-1);

	r = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (r == -1)
	return (-1);

	len = strlen(text_content) + 1;
	b = malloc(sizeof(char) * (len));
	if (b == NULL)
	{
	close(r);
	return (-1);
	}

	strcpy(b, text_content);
	write(r, text_content, len);

	close(r);
	free(b);
	return (1);
}
