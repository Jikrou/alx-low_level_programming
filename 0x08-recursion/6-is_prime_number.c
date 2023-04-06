#include "main.h"
/**
 * is_prime_number -  a function that returns 1 if
 * the input integer is a prime number,
 * otherwise return 0.
 * @n: the number
 * Return: a integer
*/
int is_prime_number(int n)
{
	return (prime(n, 2));
}

/**
 * prime - a recursive helper function that checks
 * if a given integer n is a prime number
 * @n: the number to check
 * @i: is a counter variable that start at 2 and
 * incremented by 1 in each recursive call
 *
 * Return: an integer
*/
int prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (i == n - 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (prime(n, i + 1));
}
