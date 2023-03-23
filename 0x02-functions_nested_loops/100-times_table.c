#include "main.h"
/**
 * print_times_table - print the times table of the input n
 *  starting with 0.
 * @n: the number of times table
 * Return: Empty output
*/
void print_times_table(int n)
{
int i, j, multi;
if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
_putchar('0');
for (j = 1; j <= n; j++)
{
_putchar(',');
multi = i * j;
if (multi < 10)
{
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(multi + '0');
}
else if (multi <= 99 && multi >= 10)
{
_putchar(' ');
_putchar(' ');
_putchar((multi / 10) + '0');
_putchar((multi % 10) + '0');
}
else if (multi >= 100)
{
_putchar(' ');
_putchar((multi / 100) + '0');
_putchar(((multi / 10)) % 10 + '0');
_putchar((multi % 10) + '0');
}
if (j == n)
_putchar('\n');
}
}
}
if (n == 0)
_putchar('\n');
}
