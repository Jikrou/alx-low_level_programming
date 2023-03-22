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
for (j = 0; j <= 9; j++)
{
int multi = i * j;

if (multi == 0)
{
_putchar(' ');
_putchar(' ');
_putchar('0');
_putchar(',');
}
else if (multi < 10)
{
_putchar(' ');
_putchar(' ');
_putchar((multi % 10) + '0');
_putchar(',');
}
else
{
_putchar(' ');
_putchar((multi / 10) + '0');
_putchar((multi % 10) + '0');
_putchar(',');
}
if (j == 9)
{
_putchar('\n');
}
}
}
}
