#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point
 * Description: a program that adds positive numbers.If no
 * number is passed to the program, 0 is printed, if one of the
 * number contains symbols that are not digits,Error is printed,
 * followed by a new line, and return 1
 * @argc: count arguments count
 * @argv: arguments
 *
 * Return: an integer
*/
int main(int argc, char *argv[])
{
	int i, j, args;
	int result = 0;
	char *argn;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
	argn = argv[i];
	for (j = 0; argn[j] != '\0'; j++)


		if (!isdigit(argn[j]))
		{
			printf("Error\n");
			return (1);
		}
	args = atoi(argn);
	result += args;
	}
	printf("%d\n", result);
	return (0);
}
