#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - a function that prints anything.
 * @format: list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
	const char *sp = format;
	int n1;
	char n2;
	double n3;
	char *n4;
	va_list args;

va_start(args, format);
while (*sp != '\0')
{
switch (*sp)
{
	case 'c':
	n2 = va_arg(args, int);
	printf("%c", n2);
	break;
	case 'i':
	n1 = va_arg(args, int);
	printf("%d", n1);
	break;
	case 'f':
	n3 = va_arg(args, double);
	printf("%f", n3);
	break;
	case 's':
	n4 = va_arg(args, char *);
		if (n4 == NULL)
		{
			printf("(nil)");
		}
		else if (n4 != NULL)
		{
			printf("%s", n4);
		}
	break;
	default:
	break;
}
	sp++;
}
printf("\n");
va_end(args);
}
