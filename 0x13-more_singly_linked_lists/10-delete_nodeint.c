#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * delete_nodeint_at_index - deletes node at index of a linked list
 * @head: head
 * @index: index of node, starting at 0
 * Return: returns the node at nth index
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	unsigned int i;
	listint_t *prevNode = *head;
	listint_t *futNode = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		return (1);
	}
	for (i = 0; i != index; i++)
	{
		tmp = tmp->next;
		futNode = futNode->next;

		if (i >= 1)
		{
			prevNode = prevNode->next;
		}
	}
	futNode = futNode->next;
	prevNode->next = futNode;
	free(tmp);


	return (1);
}
