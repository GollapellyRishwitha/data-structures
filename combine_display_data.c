#include<stdio.h>
#include<stdlib.h>
struct sll
{
 int data;
 struct sll*link;
};
void traverse_sll(struct sll*head);
void main()
{
struct sll*head=(struct sll*)malloc(sizeof(struct sll*));
head->data=10;
head->link=NULL;

struct sll*current=(struct sll*)malloc(sizeof(struct sll*));
current->data=20;
current->link=NULL;

head->link=current;

current=(struct sll*)malloc(sizeof(struct sll*));
current->data=30;
current->link=NULL;

head->link->link=current;
traverse_sll(head);
}
void traverse_sll(struct sll*head)
{
struct sll*temp=NULL;
temp=head;
int count=0;
if(head==NULL)
{
printf(" sll is empty");
exit(0);
}
while(temp!=NULL)
{
printf(" %d ",temp->data);
count=count+1;
temp=temp->link;
}
printf(" %d ",count);
}

/*10  20  30  3 */
