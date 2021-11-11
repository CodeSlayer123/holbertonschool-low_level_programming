#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * insert_nodeint_at_index - inserts new node at given position
 * @head: head
 * @idx: index of node, starting at 0
 * @n: number
 * Return: returns the node at nth index
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = *head;
	unsigned int counter;
	listint_t *newNode;
	listint_t *prevNode = *head;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		newNode->n = n;
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	for (counter = 0; counter != idx; counter++)
	{
		if (tmp == NULL)
		{
			return (NULL);
		}
		tmp = tmp->next;

		if (counter >= 1)
		{
			prevNode = prevNode->next;
		}
	}

	newNode->n = n;
	newNode->next = tmp;
	prevNode->next = newNode;

	return (newNode);
}
