#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * print_dlistint - prints all elements of a list_t list
 * @h: head
 * Return: returns number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int stuff;
	const dlistint_t *tmp = h;
	int nodes;

	nodes = 0;
	for (; tmp != NULL;)
	{
		stuff = tmp->n;
		printf("%d\n", stuff);
		nodes++;
		tmp = tmp->next;
}
	return (nodes);
}
