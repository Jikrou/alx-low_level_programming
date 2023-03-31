#include "main.h"
/**
 * rot13 - a function that encodes a string using rot13.
 * @str: string
 * Return: characters
*/
char *rot13(char *str)
{
	char *cyp = str;
	int i;

for (i = 0; str[i] != '\0'; i++)
{
	char c = str[i];

	if (c >= 'A' && c <= 'Z')
	{
		cyp[i] = (((c - 'A') + 13) % 26 + 'A');
	}
	else if (c >= 'a' && c <= 'z')
	{
		cyp[i] = (((c - 'a') + 13) % 26 + 'a');
	}
	else
	{
		cyp[i] = (c);
	}
}
	return (cyp);
}
