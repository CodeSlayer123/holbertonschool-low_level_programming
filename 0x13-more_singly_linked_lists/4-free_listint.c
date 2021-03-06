#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * free_listint - frees a list_t list
 * @head: head
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	for (; head != NULL;)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}


}
