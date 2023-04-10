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
	int arg1, arg2;
	int result = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
		arg1 = atoi(argv[1]);
		arg2 = atoi(argv[2]);
		result = arg1 * arg2;

	printf("%d\n", result);
	return (0);
}
