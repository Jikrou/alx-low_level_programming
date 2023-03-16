#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: C program that prints the size of various types of data
 *
 * Return: Always 0 (success)
*/

int main(void)
{
char a;
int z;
long e;
long long int r;
float t;

printf("Size of a char: %zu byte(s)\n", sizeof(a));
printf("Size of an int: %zu byte(s)\n", sizeof(z));
printf("Size of a long int: %zu byte(s)\n", sizeof(e));
printf("Size of a long long int: %zu byte(s)\n", sizeof(r));
printf("Size of a float: %zu byte(s)\n", sizeof(t));
return (0);
}
