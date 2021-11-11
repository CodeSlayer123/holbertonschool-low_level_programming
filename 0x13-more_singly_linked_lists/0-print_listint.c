#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * print_listint - prints all elements of a list_t list
 * @h: head
 * Return: returns number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int stuff;
	const listint_t *tmp = h;
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
