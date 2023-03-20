#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: C program that print all possible combination
 * of number range from 0 to 99
 *
 * Return: 0 (Success)
*/
int main(void)
{
	int i;
	int j;
	int k;
	int l;
for (i = 0; i < 9; i++)
{
for (j = i + 1; j <= 9; j++)
{
for (k = 0; k <= 9; k++)
{
for (l = 0; l <= 9; l++)
{
putchar(i + '0');
putchar(j + '0');
putchar(' ');
putchar(k + '0');
putchar(l + '0');
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
