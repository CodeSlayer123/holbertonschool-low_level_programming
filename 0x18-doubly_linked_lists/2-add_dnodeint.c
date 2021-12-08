#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_dnodeint - adds new node at beginning of a list_h list
 * @head: head
 * @n: number
 * Return: returns address of the new element, or null if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;

	if (head != NULL)
		(*head)->prev = newNode;

	*head = newNode;

	return (newNode);
}
