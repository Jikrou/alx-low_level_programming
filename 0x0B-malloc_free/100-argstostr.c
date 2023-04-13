#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - a function that concatenates all the arguments
 * of your program.
 * @ac: number of arguments
 * @av: arguments
 * Return: a pointer character
*/
char *argstostr(int ac, char **av)
{
	int i;
	size_t l;
	char *ar;
	int n = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	l = strlen(*av) + 1;
	ar = malloc((ac + 1) * sizeof(char) * 10);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		l = 0;
		while (av[i][l] != '\0')
		{
			ar[n] = av[i][l];
			n++;
			l++;
		}
		ar[n] = '\n';
		n++;
	}
	ar[n] = '\0';
	return (ar);
}
