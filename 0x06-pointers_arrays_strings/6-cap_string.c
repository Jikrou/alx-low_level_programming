#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string
 * @s: string
 * Return: string
*/
char *cap_string(char *s)
{
int i = 0;

while (s[i] != '\0')
{
if ((i == 0 || s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n'
||
s[i - 1] == ',' || s[i - 1] == '.' || s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == ';' || s[i - 1] == '"' || s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||s[i - 1] == '}') && (s[i] >= 'a' && s[i] <= 'z'))
{
s[i] -= ('a' - 'A');
}
i++;
}
return (s);
}
