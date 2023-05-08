#include "main.h"
/**
 * read_textfile - a function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: the name of the file to read and print
 * @letters: is the number of letters it should read and print
 * Return: the actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int r;
	char *b;
	size_t br;

	if (filename == NULL)
		return (0);

	r = open(filename, O_RDONLY);
	if (r == -1)
		return (0);

	b = malloc(sizeof(char) * (letters + 1));
	if (b == NULL)
		return (0);

	br = read(r, b, letters);
	if (br > 0)
	{
		b[br] = '\0';
		write(STDOUT_FILENO, b, br);
	}
	close(r);
	free(b);

	return (br);
}
