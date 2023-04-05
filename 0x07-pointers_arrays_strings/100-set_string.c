#include "main.h"
/**
 * set_string - a function that sets the value of a pointer to a char.
 * @s: pointer to a pointer
 * @to: pointer
*/

void set_string(char **s, char *to)
{
if (*s == '\0')
{
*s = to;
}
}
