#include "main.h"
/**
 * print_last_digit - prints the last
 * digit of a number
 * @x: the number to print of the last digit
 * Return: last digit
*/
int print_last_digit(int x)
{
	int n;

	n = x % 10;
	if (n < 0)
	{
		_putchar(-n + 0);
			return (-n);
	}
	else
	{
		_putchar(n + 0);
		return (n);
	}
}

