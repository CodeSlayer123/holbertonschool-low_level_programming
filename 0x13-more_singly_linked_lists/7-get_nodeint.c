#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * get_nodeint_at_index - find nth node of a listint_t linked list
 * @head: head
 * @index: index of node, starting at 0
 * Return: returns the node at nth index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int counter;

	if (head == NULL)
	{
		return (NULL);
	}
	for (counter = 0; counter != index; counter++)
	{
		if (tmp == NULL)
		{
			return (NULL);
		}
		tmp = tmp->next;
	}
	return (tmp);
}
