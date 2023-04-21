#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: a character
 * @n: integer
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (s != NULL)
		{
		printf("%s", s);
		}
		else if (s == NULL)
		{
			printf("(nil)");
		}

		if (separator != NULL && i < n - 1)
		{
		printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
