#include <stdio.h>
/**
 * main - Entry point
 * Description: a program that finds and prints the largest
 *  prime factor of the number 612852475143,
 * Return: 0 (Success)
*/
int main(void)
{
	int long n = 612852475143;
	int i = 2;

	while (n != 1)
	{
		if (n % i == 0)
		{
			while (n % i == 0)
			{
				printf("%d ", i);
			       n = n / i;
			}
		}

			i++;
	}
printf("\n");
return (0);
}
