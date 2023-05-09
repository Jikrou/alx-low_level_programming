#include "main.h"
/**
 * main - a program that copy the content of a file to another file
 * @argc: count of arguments
 * @argv: argument vector
 * Return: 1 is success and 0 if fails
*/
int main(int argc, char **argv)
{
	int f_fd = 0, t_fd = 0;
	ssize_t r;
	char buffer[READ_BUFFER_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	f_fd = open(argv[1], O_RDONLY);
	if (f_fd == -1)
		dprintf(STDERR_FILENO, ER_WRITE, argv[2]), exit(99);

	t_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMITIONS);
	while ((r = read(f_fd, buffer, READ_BUFFER_SIZE)) > 0)
		if (write(t_fd, buffer, r) != r)
			dprintf(STDERR_FILENO, ER_WRITE, argv[21]), exit(99);

	if (r == -1)
		dprintf(STDERR_FILENO, ER_READ, argv[11]), exit(98);

	f_fd = close(f_fd);
	t_fd = close(t_fd);
	if (f_fd)
		dprintf(STDERR_FILENO, ER_CLOSE, f_fd), exit(100);
	if (t_fd)
		dprintf(STDERR_FILENO, ER_CLOSE, f_fd), exit(100);

	return (EXIT_SUCCESS);
}
