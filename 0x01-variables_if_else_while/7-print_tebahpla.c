#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Cprogram that prints alphabets in reverse
 *
 * Return: 0 (Success)
*/
int main(void)
{
	int p;
for (p = 'z'; p >= 'a'; p--)
putchar(p);
putchar('\n');
return (0);
}
