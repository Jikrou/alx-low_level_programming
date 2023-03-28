#include "main.h"
/**
 * puts2 - a function that print every other number
 * of a string
 * @str: string
*/
void puts2(char *str)
{
	int i = 0;

for (i = 0; str[i] != '\0'; i++)
	{
if ((i % 2) == 0)
_putchar(str[i]);
else
continue;
	}
	_putchar('\n');
}
