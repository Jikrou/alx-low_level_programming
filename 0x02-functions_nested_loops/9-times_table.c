#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0
 *
 * Return: Nothing
*/
void times_table(void)
{
int i, j;

for (i = 0; i <= 9; i++)
{
_putchar('0');
_putchar(',');
for (j = 1; j <= 9; j++)
{
int multi = i * j;

if (multi < 10)
{
_putchar(' ');
_putchar(' ');
_putchar((multi % 10) + '0');
}
else
{
_putchar(' ');
_putchar((multi / 10) + '0');
_putchar((multi % 10) + '0');
}
if (j == 9)
{
_putchar('\n');
}
else
{
	_putchar(',');
}
}
}
}
