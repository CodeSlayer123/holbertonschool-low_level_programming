#include "main.h"
/**
 * swap_int - swaps value of two integers
 *
 * @a: first number
 *
 * @b: second number
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
  int swap = *a;
  *a = *b;
  *b = swap;


}
