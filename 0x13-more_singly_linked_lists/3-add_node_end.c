#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds new node at end of a list_h list
 * @head: head
 * @str: string
 * Return: returns address of the new element, or null if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *last;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	last = *head;
	newNode->str = strdup(str);
	newNode->len = strlen(str);
		newNode->next = NULL;
		if (*head == NULL)
		{
			*head = newNode;
			return (newNode);
		}

			while (last->next != NULL)
			{
				last =  last->next;
			}

		last->next = newNode;

	return (newNode);
}
