#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * free_listint2 - frees a list_t list and sets head to NULL
 * @head: head
 * Return: nothing
 */

void free_listint2(listint_t **head)
{

	listint_t *tmp;

	for (; *head != NULL;)
	{
		tmp = (*head)->next;
	free(*head);
	*head = tmp;
	}
	*head = NULL;

}
