#include "main.h"
/**
*print_number - a function that prints an integer.
*@n: the number to print
*return: no value
*/
void print_number(int n)
{
if (n < 0)
{
putchar(n + '0');
}
else if (n <= 10)
{
putchar((n % 10) + '0');
}
else if (n <= 100)
{
putchar((n / 100) + '0');
putchar((n / 10) % 10 + '0');
putchar((n % 10) + '0');
}
putchar('\n');
}
