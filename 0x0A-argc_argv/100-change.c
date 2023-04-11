#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: a function that prints the minimum number of
 * coins to make change for an amount of money. cents is the
 * amount of cents you need to give back, accept one argument
 * and print an Error otherwise, convert the argument using atoi
 * if the number is negative it print 0
 * @argc: count of arguments
 * @argv: argument cents
 *
 * Return: an integer
*/

int main(int argc, char *argv[])
{

	int cents = atoi(argv[1]);
	int coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	 coins = coins_cal(cents);

	printf("%d\n", coins);
		return (0);

}

/**
 * coins_cal - a helper function that calculate the number of coins
 * for each value for main
 * @cents: the amount given
 * Return: an integer to main
*/
int coins_cal(int cents)
{
	int q = 0;
	int d = 0;
	int n = 0;
	int t = 0;
	int o = 0;

	if (cents < 0)
	{
		printf("0\n");
	}

	while (cents >= 25)
	{
		cents -= 25;
		q++;
	}
	while (cents >= 10)
	{
		cents -= 10;
		d++;
	}
	while (cents >= 5)
	{
		cents -= 5;
		n++;
	}
	while (cents >= 2)
	{
		cents -= 2;
		t++;
	}
	while (cents >= 1)
	{
		cents -= 1;
		o++;
	}

	return (q + d + n + t + o);
}


