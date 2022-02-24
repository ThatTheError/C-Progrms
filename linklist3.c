#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *link;
}node;
int main()
{
	node *head,*head2,*temp,*temp2;
	int temp3;
	int n;
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
	head2=head;
	temp2=head->link;
	while(temp2!=NULL)
	{
		while(temp2!=NULL)
		{
			if(head->data>temp2->data)
			{
				temp3=temp2->data;
				temp2->data=head->data;
				head->data=temp3;
			}
			temp2=temp2->link;
		}
		head=head->link;
		temp2=head->link;
	}
	while(head2!=NULL)
	{
		printf("\t%d",head2->data);
		
		head2=head2->link;
	}
	return 0;
}
