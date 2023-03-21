#include "main.h"
/**
 * jack_bauer - print every minte of the day
 * return: 0 (Success)
*/
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 59; j++)
		{
			_putchar(i + '0');
			_putchar(':');
			_putchar(j + '0');
			_putchar('\n');
		}
	}
	return (0);
}

