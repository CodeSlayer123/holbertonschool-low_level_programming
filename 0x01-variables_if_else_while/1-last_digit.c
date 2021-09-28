#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - tells if a random number is positive or negative
 *
 * Return: will return 0
 */
int main(void)
{
	int n;
	int lastDigit;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDigit = n % 10;

	printf("Last digit of %i is %i and is ", n, lastDigit);
	if (lastDigit > 5)
	{
	printf("greater than 5\n");
	}
	else if (lastDigit == 0)
	{
	printf("0\n");
	}
	else if (lastDigit < 6 && lastDigit != 0)
	{
	printf("less than 6 and not 0\n");
	}
	return (0);
}
