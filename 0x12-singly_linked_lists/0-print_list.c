#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * print_list - prints all elements of a list_t list
 * @h: head
 * Return: returns number of nodes
 */

size_t print_list(const list_t *h)
{
	char *stuff;
	const list_t *tmp = h;
	int nodes;

	nodes = 0;
	for (; tmp != NULL;)
	{
		if (tmp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		stuff = tmp->str;
		printf("[%d] %s\n", tmp->len, stuff);
		}
		nodes++;
		tmp = tmp->next;


	}
	return (nodes);
}
