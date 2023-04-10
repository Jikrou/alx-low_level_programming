#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: a function that multiplies two numbers if the argument
 * count is two number and if the program does not receive two arguments,
 * it print Error and return 1
 * @argc: arguements count
 * @argv: arguments
 *
 * Return: an integer
*/

int main(int argc, char *argv[])
{
	int i, args;
	int result = 1;

	if (argc >= 2)
	{
	for (i = 1; i < argc; i++)
	{
		args = atoi(argv[i]);

		result = result * args;
	}
	return (result);
	printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
