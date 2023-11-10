#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
void traverse();
void reverse();
void main()
{
	struct node *head=(struct node*)malloc(sizeof(struct node));
	head->data=10;
	head->link=NULL;
	
	struct node *current=(struct node*)malloc(sizeof(struct node));
	current->data=20;
	current->link=NULL;
	head->link=current;
	
	current=(struct node*)malloc(sizeof(struct node));
	current->data=30;
	current->link=NULL;
	head->link->link=current;
	
	current=(struct node*)malloc(sizeof(struct node));
	current->data=40;
	current->link=NULL;
	head->link->link->link=current;
	
	printf("Before reverse\n");
	traverse(head);
	
	printf("\nAfter  reverse\n");
	reverse(head);
}
void reverse(struct node *head)
{
	struct node *temp1=NULL;
	struct node *temp2=NULL;
	while(head!=NULL)
	{
		temp2=head->link;
		head->link=temp1;
		temp1=head;
		head=temp2;
	}
	head=temp1;
	traverse(head);
}
void traverse(struct node *head)
{
	struct node *temp=head;
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->link;
	}
}
	
