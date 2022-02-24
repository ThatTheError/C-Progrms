#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *link;
}node;
int main()
{
	node *head,*temp;
	int n,s=0;
	printf("enter number of elements you want to store");
	scanf("%d",&n);
	printf("enter the numbers");
	head=NULL;
	while(n>0)
	{
		temp=(node *)malloc(sizeof(node));
		scanf("%d",&(temp->data));
		if(head==NULL)	
		{
			head=temp;
			temp->link=NULL;
		}
		else
		{
			temp->link=head;
			head=temp;
		}
		n--;
	}
	while(head!=NULL)
	{
		s=s+head->data;
		head=head->link;
	}
	printf("%d",s);
	return 0;
}
