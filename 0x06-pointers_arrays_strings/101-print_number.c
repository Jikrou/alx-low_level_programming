#include "main.h"
/**
 * print_number - a function that prints an integer
 * @n: integer
*/
void print_number(int n)
{
	int div = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n / div >= 10)
	{
		div = div * 10;
	}
	while (div > 0)
	{
		int dig = n / div;

		_putchar('0' + dig);
		n = n - dig * div;
		div = div / 10;
	}
	_putchar('\n');
}

