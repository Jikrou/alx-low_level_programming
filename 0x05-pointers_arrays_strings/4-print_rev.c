#include "main.h"
/**
* print_rev - a function that prints a string, in reverse,
* followed by a new line.
* @s: the string
* Return: no value
*/
void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	for (; i >= 0; i--)
	{
		_putchar(*s);
			s--;
	}
	_putchar('\n');
}
