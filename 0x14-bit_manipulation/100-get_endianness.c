#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: nothing
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	if (*c)
		printf("Little endian");
	else
		printf("Big endian");
	getchar();
	return (0);
}
