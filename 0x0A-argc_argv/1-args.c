#include <stdio.h>
/**
 * main - prints the program's name
 * @argc: argument count
 * @argv: array of arguments passed from terminal
 * Return: On success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{

	/*	 int aUnused __attribute__((unused)) = argc; */

	printf("%d\n", argc);
	return (0);
}
