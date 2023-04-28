#include "lists.h"
/**
 * print_tur - a dunction that print a message before
 * the main function is executed.
 * __attribute__((constructor)): is a function attribute that
 * specifies that the function should be executed before
 * the main function
*/
static void __attribute__((constructor))print_tur(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
