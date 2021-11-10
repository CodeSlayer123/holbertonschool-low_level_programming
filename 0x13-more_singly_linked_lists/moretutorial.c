#include <stdio.h>
#include <stdlib.h>


typedef struct node {
	int value;
	struct node *next;

} node;

void printlist(node *head);
void printlist(node *head)

{
	node *tmp;

	tmp = head;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->value);
		tmp = tmp->next;
	}



}

node *createNode(int value)
{
	node *result;
	result = malloc(sizeof(node));
					result->value = value;
					result->next = NULL;
					return result;
}


int main(void)
{

	node *head;
	node *tmp;
	int i;

	head = NULL;

	for (i = 0; i < 25; i++)
	{
		tmp = createNode(i);
		tmp->next = head;
		head = tmp;

	}



/*
	node *head;
	node *tmp;
	tmp = createNode(32);
	head = tmp;
	tmp = createNode(8);
	tmp->next = head;
	head = tmp;
	tmp = createNode(54);
	tmp->next = head;
	head = tmp;
*/

	printlist(head);
	return (0);

}
