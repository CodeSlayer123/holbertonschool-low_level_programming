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
int main(void)
{

	node n1, n2, n3;
	node *head;

	n1.value = 45;
	n2.value = 8;
	n3.value = 32;

//link them
	head = &n1;
	n3.next = NULL;
	n2.next = &n3;
	n1.next = &n2;

	node n4;
	n4.value = 2500;
	n4.next = &n3;
	n2.next = &n4;

	head = head->next;

	printlist(head);
	return (0);

}
