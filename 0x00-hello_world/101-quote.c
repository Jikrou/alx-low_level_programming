#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: C program prints without using printf or puts
 * using write function followed by a new line to the standard output 2
 *
 * return: 1 (not success)
*/
int main(void)
{
char qot[] =  "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, qot, sizeof(qot) - 1);
return (1);
}
