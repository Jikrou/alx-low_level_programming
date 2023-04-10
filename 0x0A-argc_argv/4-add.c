#include <stdio.h>
#include <stdlib.h>
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
	int i, args;
	int result = 0;

	if (argc < 1)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
	args = atoi(argv[i]);

		if (args == 0 && argv[i][0] != '\0')
		{
			printf("Error\n");
			return (1);
		}
	result += args;
	}
	printf("%d\n", result);
	return (0);
}
