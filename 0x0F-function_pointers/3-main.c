#include "calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: arguments
 * Return: an integer
*/
int main(int argc, char *argv[])
{
	int cal, num1, num2;
	char *operator;
	int (*op_func)(int, int);


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	op_func = get_op_func(operator);
	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	cal = op_func(num1, num2);
	printf("%d\n", cal);

	return (0);
}
