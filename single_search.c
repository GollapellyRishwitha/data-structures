#include<stdio.h>
#include<stdlib.h>
struct node
{
   	int data;
   	struct node *link;
};
void search(struct node *head,int position);
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
    	current=(struct node*)malloc(sizeof(struct node));
    	current->data=50;
    	current->link=NULL;
    	head->link->link->link->link=current;
    	search(head,30);
}
void search(struct node *head,int search)
{
	struct node *temp=head;
	int count=1;
	while(temp!=NULL)
	{
		if(temp->data==search)
		{
			printf("\n %d is found at %d node \n",search,count);
			break;
		}	
		else
		{
			temp=temp->link;
			count++;
	

		}
	}
}
