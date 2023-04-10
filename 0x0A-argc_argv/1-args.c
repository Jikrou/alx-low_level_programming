#include <stdio.h>
/**
 * main - entry point
 * Description: a program that prints the number of
 * arguments passed into it. followed by a newline
 * @argc: number of arguments
 * @argv: the arguments
 *
 * Return: an integer
*/
int main(int argc, char *argv[])
{
if (*argv[0])
printf("%i\n", argc - 1);
return (0);
}
