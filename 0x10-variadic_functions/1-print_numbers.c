#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: a character
 * @n: integer
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	va_end(num);
	printf("\n");
}
