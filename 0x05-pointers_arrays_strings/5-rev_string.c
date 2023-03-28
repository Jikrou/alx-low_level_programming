#include "main.h"
/**
 * rev_string - a function that print a string
 * @s: the string
 * Return: no value
*/
void rev_string(char *s)
{
int i;
int c = 0;
char rev = s[0];

while (s[c] != '\0')
c++;
for (i = 0; i < c; i++)
{
c--;
rev = s[i];
s[i] = s[c];
s[c] = rev;
}
}
