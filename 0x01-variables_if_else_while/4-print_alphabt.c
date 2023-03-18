#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: C program that print the alphabet except
 * for e and q
 *
 *  Return: 0 (Success)
*/

int main(void)
{
	int i;
for (i = 97; i <= 122; i++)
{
if (i != 101 && i != 113)
{
putchar(i);
}
}
putchar('\n');
return (0);
}

