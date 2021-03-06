#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	int i;
	int size = ht->size;
	hash_node_t *tmp;
	hash_node_t *head;

	for (i = 0; i < size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (ht->array[i]->next != NULL)
			{
				head = ht->array[i]->next;
				while (head != NULL)
				{
					tmp = head;
					head = head->next;
					free(tmp->key);
					free(tmp->value);
					free(tmp);
				}
			}
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
		}
	}
	free(ht->array);
	free(ht);
}
