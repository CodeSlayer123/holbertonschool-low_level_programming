#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * free_list - frees a list_t list
 * @head: head
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *tmp;

	for (; head != NULL;)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}


}
