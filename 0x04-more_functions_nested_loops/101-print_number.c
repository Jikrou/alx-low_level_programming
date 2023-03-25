#include "main.h"
/**
*print_number - a function that prints an integer.
*@n: the number to print
*return: no value
*/
void print_number(int n)
{
if (n <= 0 || n > 0)
{
_putchar(n + '0');
}
else if (n > 10 && n < 100)
{
_putchar((n % 10) + '0');
}
else if (n >= 100)
{
_putchar((n / 100) + '0');
_putchar((n / 10) % 10 + '0');
_putchar((n % 10) + '0');
}
_putchar('\n');
}
