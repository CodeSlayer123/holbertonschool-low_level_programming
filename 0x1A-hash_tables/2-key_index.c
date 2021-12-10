#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
 * key_index - gives index of a key
 * @key: key
 * @size: size
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int index;

	index = hash_djb2(key);
	index = index % size;

	return (index);
}
