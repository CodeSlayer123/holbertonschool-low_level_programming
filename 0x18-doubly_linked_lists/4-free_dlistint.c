#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * free_dlistint - frees a list_t list
 * @head: head
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	for (; head != NULL;)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}


}
