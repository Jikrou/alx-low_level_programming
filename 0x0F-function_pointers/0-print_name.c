#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - a function that prints a name.
 * @name: a string
 * @f: a function pointer
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
	f(name);

	if (name == NULL || f == NULL)
		return;
}
