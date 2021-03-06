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
	int size;
	char *value;

	if (ht == NULL || key == NULL)
		return (NULL);
	size = ht->size;
	index = key_index((const unsigned char *)key, size);

	if (ht->array[index] == NULL)
		return (NULL);
	while (ht->array[index] != NULL)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			value = ht->array[index]->value;
			return (value);
		}
		ht->array[index] = ht->array[index]->next;
	}
	return (NULL);
}
