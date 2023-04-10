#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * Description: a function that prints its name,
 * followed by a new line.
 * @argc: count of arguments
 * @argv: the arguments
 *
 * Return: an integer
*/
int main(int argc, char *argv[])
{
	if (argc <= 1)
	printf("%s\n", argv[0]);
	return (0);
}
