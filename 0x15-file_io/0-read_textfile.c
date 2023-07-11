#include "main.h"
/**
 * read_textfile -  a function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: is the name of the file
 * @letters: is the number of letters it should read and print
 * Return: on success the actual number of letters it could read and print
 * otherwise 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int r;
	char *b;
	size_t br;

	if (filename == NULL)
		return (0);

r = open(filename, 0_RDONLY);
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
