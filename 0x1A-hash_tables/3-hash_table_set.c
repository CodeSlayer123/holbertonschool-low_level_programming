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
	hash_node_t *new, *current, *before;

	if (key == NULL)
		return (0);
	index = key_index((const unsigned char *)key, size);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = malloc(sizeof(hash_node_t));
	if (new == NULL || new->key == NULL)
		return (0);
	new->value = malloc(sizeof(hash_node_t));
	if (new == NULL || new->value == NULL)
		return (0);

	strcpy(new->key, key);
	strcpy(new->value, value);

	new->next = NULL;
	current = ht->array[index];

	if (current == NULL)
		ht->array[index] = new;
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		before = current;
		current = current->next;
		current = new;
		before->next = new;
	}
return (1);
}
