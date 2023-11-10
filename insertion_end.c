#include<stdio.h>
#include<stdlib.h>
struct sll
{
 int data;
 struct sll *link;
};
void sll_insert_last(struct sll *head,int data);
void traverse_sll(struct sll*head);
void main()
{
struct sll *head=(struct sll*)malloc(sizeof(struct sll));
head->data=10;
head->link=NULL;

struct sll *current=(struct sll*)malloc(sizeof(struct sll));
current->data=20;
current->link=NULL;

head->link=current;

current=(struct sll*)malloc(sizeof(struct sll));
current->data=30;
current->link=NULL;

head->link->link=current;
sll_insert_last(head,40);
traverse_sll(head);
}
void sll_insert_last(struct sll*head,int data)
{
struct sll*new=(struct sll*)malloc(sizeof(struct sll));
new->data=data;
new->link=NULL;
struct sll*temp=NULL;
temp=head;
while(temp->link!=NULL)
       temp=temp->link;

temp->link=new;
}
void traverse_sll(struct sll*head)
{
struct sll*temp=NULL;
temp=head;
if(head==NULL)
{
printf(" sll is empty");
}
while(temp!=NULL)
{
printf(" %d ",temp->data);
temp=temp->link;
}
printf("NULL");
}
/* 10  20  30  40 NULL*/ 
