#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - adds new node at beginning of a list_h list
 * @head: head
 * @str: string
 * Return: returns address of the new element, or null if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	newNode->len = strlen(str);
		newNode->next = *head;
		*head = newNode;

	return (newNode);
}
