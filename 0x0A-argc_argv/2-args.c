#include<stdio.h>
/**
 * main - entry point
 * Description: a function that prints all arguments it receives
 * including the first one on a separated line
 * @argc: number of arguments
 * @argv: the arguments
 *
 * Return: an integer
*/
int main(int argc, char *argv[])
{
	while (argc > 0)
	{
		printf("%s\n", *argv);
		argv++;
		argc--;
	}
	return (0);
}
