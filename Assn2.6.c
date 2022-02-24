// Write an algorithm to insert and delete nodes at beginning and end of a Single Linked List.
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}node;
void insertend(int);
void prints();
void insertbeg(int);
void delbeg();
//void insertend();
void delbeg();
node *head=0,*ptr;
int main()
{
	int n,i=0,d,x,end;
	printf("enter how many node you want to create..");
	scanf("%d",&n);
	printf("enter your data");
	while(i<n)
	{	
		scanf("%d",&x);
		insertbeg(x);
		i++;
	}
	printf("enter the value you want to insert at the end..");
	scanf("%d",&end);
	insertend(end);
	prints();
}
void insertbeg(int x)
{
	node *temp;
	temp=(node *)malloc(sizeof(node));
	if(head==0)
	{
		temp->data=x;
		temp->next=0;
		head=ptr=temp;
	}
	else
	{
		temp->data=x;
		temp->next=head;
		head=temp;
	}
}
void insertend(int x)
{
	node *temp;
	temp=(node *)malloc(sizeof(node));
	if(head==0)
	{
		temp->data=x;
		temp->next=0;
		head=ptr=temp;
	}
	else
	{
		temp->data=x;
		temp->next=0;
		ptr->next=temp;
	}
}
void prints()
{
	while(head)
	{
		printf("%d",head->data);
		head=head->next;
	}
}
