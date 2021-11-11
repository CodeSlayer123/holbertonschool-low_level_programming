#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * pop_listint - deletes head
 * @head: head
 * Return: nothing
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int deleted = (*head)->n;

	if (*head == NULL)
	{
		return (0);
	}
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
		return (deleted);


}
