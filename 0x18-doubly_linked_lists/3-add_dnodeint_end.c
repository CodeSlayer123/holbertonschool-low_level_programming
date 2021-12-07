#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_dnodeint_end - adds new node at end of a list_h list
 * @head: head
 * @n: number
 * Return: returns address of the new element, or null if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *last;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	last = *head;
	newNode->n = n;
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
