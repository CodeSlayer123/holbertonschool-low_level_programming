#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_get - retrieves value associated with a key
 * @ht: hash table
 * @key: key
 * Return: value associated with element, or NULL if key can not be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	int size = ht->size;
	char *value;

	if (key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, size);

	if (ht->array[index] == NULL)
		return ("(null)");
	if (ht->array[index]->next == NULL)
		value = (ht->array[index]->value);
	else
	{
		while (ht->array[index]->next != NULL)
		{
			ht->array[index] = ht->array[index]->next;
		}
	}
	value = (ht->array[index]->value);
	return (value);
}
