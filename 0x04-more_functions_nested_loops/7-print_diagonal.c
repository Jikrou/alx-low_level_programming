#include "main.h"
/**
 * print_diagonal - afunction that draws a diagonal line in the terminal.
 * @n: the number to print \
 *
 * Return: no value
*/
void print_diagonal(int n)
{
	int i;

	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			_putchar('\');
			i++;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
