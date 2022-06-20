#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>



int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

int advanced_binary(int *array, size_t size, int value);
int search(int array[], int left, int right, int val);
#endif