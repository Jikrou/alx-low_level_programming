#include "main.h"
/**
 * _atoi - a function that convert a string to an integer
 * @s: string
 * Return: intteger
*/
int _atoi(char *s)
{

	int i = 0;
	int sign = 1;

	while (*s == ' 'i || *s == '+')
	{
		s++;
	}
	if (*s == '-')
	{
		s++;
		sign = -1;
	}
	while (*s >= '0' && *s <= '9')
	{
		i = i * 10 + *s++ - '0';
	}
	return (i * sign);
}
