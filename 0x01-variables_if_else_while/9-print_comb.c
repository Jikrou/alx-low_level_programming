#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: C program print numbers separated
 * by, and space
 *
 * Return: 0 (Success)
*/
int main(void)
{
	int i;
for (i = 48; i <= 57; i++)
{
putchar(i);
putchar(',');
putchar(' ');
}
return (0);
}

