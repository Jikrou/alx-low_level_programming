#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C program print the last digit of random
 * numbers assigned to the variable n
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAW / 2;

if ((n % 10) > 5)
{
printf("Last digit of %d is %i and is greater than 5\n", n, (n % 10));
}
else if ((n % 10) < 6 && (n % 10) != 0)
{
printf("Last digit of %d is %i and is less than 6 and not 0\n", n, (n % 10));
}
else if ((n % 10) == 0)
{
printf("Last digit of %d is %i and is 0\n", n, (n % 10));
}
	return (0);
}
