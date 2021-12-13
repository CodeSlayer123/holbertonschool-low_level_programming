#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_print - prints hash table
 * @ht: hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	int size;
	int i, j, last = 0;

	printf("{");
	if (ht)
	{
		size = ht->size;
		for (i = 0; i < size; i++)
		{
			if (ht->array[i] != NULL)
			{
				printf("'%s': ", ht->array[i]->key);
				j = i;
				j++;
				last = 0;
				while (j < size)
				{
					if (ht->array[j] != NULL)
						last = 1;
					j++;
				}
				if (last == 1)
					printf("'%s', ", ht->array[i]->value);
				else
					printf("'%s'", ht->array[i]->value);
			}
		}
	}
	printf("}\n");
}
