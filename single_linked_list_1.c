#include<stdio.h>
#include<stdlib.h>
struct sll
{
 int data;
 struct sll*link;
};
int main()
{
struct sll*head=(struct sll*)malloc(sizeof(struct sll*));
head->data=10;
head->link=NULL;
/*
struct sll*current=(struct sll*)malloc(sizeof(struct sll*));
current->data=20;
current->link=NULL;

head->link=current;
*/
struct sll*current=(struct sll*)malloc(sizeof(struct sll*));
current->data=30;
current->link=NULL;

head->link=current;

printf("%d->%d",head->data,head->link->data);
}

