/// Program to emulate a (creation-only) linked list using structures, values from user
#include<stdio.h>
#include<stdlib.h>

// Colors, to make it readable for me
// https://stackoverflow.com/a/3219471
#define RED "\x1b[31m"
#define RESET "\x1b[0m"

struct node
{
	int element;
	struct node *next;
};

void main()
{
	// Start of Linked list
	struct node *head=(struct node *)malloc(sizeof(struct node));

	// Intermediate node
	struct node *inter=NULL;

	// Point Intermediate node to the starting node
	inter=head;

	int n;
	printf("\n\nSpecify the number of nodes\n\n[>] ");
	scanf("%d",&n);

	// Scan initial node's element
	int i=1;
	printf("\nNode %d : Element > ",i);
        scanf("%d",&head->element);

	for(i=2;i<=n;i++)
	{
		// while we don't reach the end of Linked List
		while(inter->next!=NULL)
			inter=inter->next;

		// Inserting New Element
		// Allocate memory for new element
		// & Link last element to the newly inserted element's address
		inter->next=(struct node *)malloc(sizeof(struct node));

		// Move on to the new node
		inter=inter->next;

		// Ask user for element
		printf("\nNode %d : Element > ",i);
		scanf("%d",&inter->element);
	}

	// Printing elements
	// Set intermeditate pointer to the starting node
	inter=head;

	printf("\n");
	// while we don't reach the end of linked list, print elements
	while(inter->next!=NULL)
	{
		printf("[ %d ",inter->element);
		printf("| %p ]",inter->next);
		if(inter->next!=NULL)
			printf(RED " --> " RESET);
		inter=inter->next;
	}

	// Iteration stops on encountering last node
	// So, print the last node too
	printf("[ %d ",inter->element);
	printf("| %p ]\n\n",inter->next);
}
