#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE
int stack[MAX_SIZE];
int top=-1;
int isEmpty()
{
	return top==-1;
}
int isFull()
{
	return top=MAX_SIZE-1;
}
int peek()
{
	if(isEmpty())
	{
		printf("stack is empty");
	
	}
	else
	{
		return stack[top];
	}
}
int push(int value)
{
	if (isFull())
	{
		printf("stack is full");
	}
	else
	{
		stack[++top]=value;
	}
}
int pop()
{
	if (isEmpty())
	{
		printf("stack is empty");
	}
	else
	{
		return stack[top--];
	}
}
display stack()
{
	if (isEmpty())
	{
		printf("stack is empty");
}
}
