#include "main.h"
/**
 * print_diagonal - afunction that draws a diagonal line in the terminal.
 * @n: the number to print \
 *
 * Return: no value
*/
void print_diagonal(int n)
{
	int i, j;

if (n > 0)
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)

{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
