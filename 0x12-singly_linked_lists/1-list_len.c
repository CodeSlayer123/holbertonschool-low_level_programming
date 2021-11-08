#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * list_len - counts number of elements in a linked list_t list
 * @h: head
 * Return: returns number of nodes
 */

size_t list_len(const list_t *h)
{
	const list_t *tmp = h;
	int nodes;

	nodes = 0;
	for (; tmp != NULL;)
	{
		nodes++;
		tmp = tmp->next;
	}
	return (nodes);
}
