#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints the program's name
 * @argc: argument count
 * @argv: array of arguments passed from terminal
 * Return: On success
 */
int makecoins(int money);

int main(int argc, char *argv[])
{
	int coins;
	int money;

if (argc != 2)
      {
          printf("Error\n");
          return (1);
      }
money = atoi(argv[1]);

	if (money < 0)
	{
		printf("0\n");
		return (0);
	}
	coins = makecoins(money);
	printf("%d\n", coins);
	return (0);
}
/**
 * makecoins - make coins from an integer
 * @money: the money we get
 * Rreturns: coins from the money
 */
int makecoins(int money)
 {
	 int coins = 0;
	while (money >= 25)
	{
		coins++;
		money -= 25;
	}

	while (money >= 10)
	{
		coins++;
	money -= 10;
	}
	while (money >= 5)
      {
          coins++;
      money -= 5;
      }
	while (money >= 2)
        {
            coins++;
        money -= 2;
        }
	while (money >= 1)
        {
            coins++;
        money -= 1;
        }
	return (coins);
 }
