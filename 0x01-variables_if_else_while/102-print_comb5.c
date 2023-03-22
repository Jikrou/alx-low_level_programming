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
for (i = 0; i < 10; i++)
{
for (j = i + 1; j = 10; j++)
{
for (k = i; k < 10; k++)
{
for (l = j; l < 10; l++)
{
putchar(i + '0');
putchar(j + '0');
putchar(' ');
putchar(k + '0');
putchar(l + '0');
if (i != 9 || j != 8 || k != 9 || l != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
