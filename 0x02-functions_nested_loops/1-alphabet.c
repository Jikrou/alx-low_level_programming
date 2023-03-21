#include "main.h"
/**
 * print_alphabet - prints alphabet in lowercase
 *
 * Return: always 0 (Success)
*/
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
