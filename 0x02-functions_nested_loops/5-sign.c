#include "main.h"
/**
 * print_sign - function that print the sign of a number
 * @n: number to check tp print the sign
 * Description: C program that check if a number
 * if equal or less or greater than 0
 * Return: 0 (success)
*/
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	else
	{
		return (0);
		_putchar('0');
	}
}
