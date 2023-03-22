#include "main.h"
/**
 * times_tables - print the multiplication tables
 *
 * Description:a function that take no arguement
 * and prints the product of the multiplication tables
 * starting from 0 to 9, separated by commas and space
 * where i represent the columns and j the row
 *
 * Return:no value is returned
*/
void times_table(void)
{
int i, j;

for (i = 0; i <= 9; i++)
{
	for (j = 0; j <= 9; j++)
	{
		int multi = i * j;

		_putchar(multi + '0');

		if (j == 9)
		{
			_putchar('\n');
		}
		else if (j < 9)
		{
			_putchar(',  ');
		}
		else
		{
			_putchar(', ');
		}
	}
}
}
