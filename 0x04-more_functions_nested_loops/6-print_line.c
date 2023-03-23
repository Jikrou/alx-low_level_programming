#include "main.h"
/**
 * print_line - a function that draws a straight line in the terminal.
 * @n: integer to the lentgh of the line.
 * return: no value
*/
void print_line(int n)
{
	int i;

	i = 0;
	if (n > 0)
	{
	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
	}
	else
		_putchar('\n');
}
