#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_set - adds an element to hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	int size = ht->size;
	hash_node_t *new, *current;

	if (key == NULL || ht == NULL)
		return (0);
	index = key_index((const unsigned char *)key, size);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	if (new->key == NULL || new->value == NULL)
		return (0);

	new->next = NULL;
	current = ht->array[index];

	if (current == NULL)
		ht->array[index] = new;
	else
	{
		while (current != NULL)
		{
			if (strcmp(current->key, key))
			{
				free(current->value);
				current->value = strdup(value);
				if (current->value == NULL)
					return (0);
				free(new->key);
				free(new->value);
				free(new);
				return (1);
			}
			current = current->next;
		}
		new->next = ht->array[index];
		ht->array[index] = new;
	}
return (1);
}
