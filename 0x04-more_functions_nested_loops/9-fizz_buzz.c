#include <stdio.h>
/**
 * main - prints from 1 to 100, but Fizz and Buzz and FizBuzz respectively
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;


	for (n = 1; n <= 100; n++)
	{
	int fizz = n % 3;
	int buzz = n % 5;

		if (fizz == 0 && buzz == 0)
		{
		printf("FizzBuzz ");
		}
		else if (n == 100)
		{
		printf("Buzz\n");
		}
		else if (fizz == 0)
		{
		printf("Fizz ");
		}
		else if (buzz == 0)
		{
		printf("Buzz ");
		}

		else
		{
		printf("%i ", n);
		}
	}

	return (0);
}
