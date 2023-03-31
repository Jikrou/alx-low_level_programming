#include "main.h"
/**
 * leet - a function that encodes a string into 1337
 * @s: string
 * Return: character
*/
char *leet(char *s)
{
	char lc[] = "aAeEoOtTlL";
	char ln[] = "43071";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == lc[j])
			{
				s[i] = ln[j / 2];
				break;
			}
		}
	}
	return (s);
}
