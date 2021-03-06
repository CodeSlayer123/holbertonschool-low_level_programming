#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * sum_listint - find sum of all data (n) of a listint_t linked list
 * @head: head
 * Return: returns the node at nth index
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp = head;
	int sum;

	sum = 0;
	if (head == NULL)
	{
		return (0);
	}
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
