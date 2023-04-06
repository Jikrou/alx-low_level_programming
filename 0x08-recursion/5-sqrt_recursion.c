#include "main.h"
/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number
 * @n: the integer value whose natural square root is being found
 * Return: square root of a number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - Square root using recursion
 * Description: a function that calculates the square of
 * i and compares it with n
 * @n: the integer value whose natural square root is being found
 * @i: the tested number
 *
 * Return: a number
*/

int _sqrt_helper(int n, int i)
{
	int sqr = i * i;

	if (sqr > n)
	{
		return (-1);
	}
	else if (sqr == n)
	{
		return (i);
	}
	else
	{
		return (_sqrt_helper(n, i + 1));
	}
}
