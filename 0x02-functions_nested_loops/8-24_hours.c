#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - prints clock in 24 hour time
 *
 * Return: this is what's supposed to be returned to main
 */

void jack_bauer(void)
{

	int hour;


	for (hour = 0; hour < 23; hour++)
	{
	int minute = 0;

	for (minute = 0; minute < 59; minute++)
		{
		if (hour < 10)
		{
		printf("0%i:", hour);
		}

		else
		{

	printf("%i:", hour);
	}

	if (minute < 10)
	{
	printf("0%i\n", minute);
	}
	else
	{
	printf("%i\n", minute);
	}
	}
	}


	}
