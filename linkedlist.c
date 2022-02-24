//  BY V.GOPAL KRUSHNA PATRO

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct Node
{
	int data;
	struct Node *next;
}Node;
Node *head=NULL;
int no_of_node=0;
void insertbeg()
{
	Node *ptr;int d;
	ptr=(Node*)malloc(sizeof(Node));
	printf("Enter the data\n");
	scanf("%d",&d);
	if(head==NULL)
	{
		ptr->data=d;
		ptr->next=NULL;
		head=ptr;
		no_of_node++;
	}
	else
	{
		ptr->data=d;
		ptr->next=head;
		head=ptr;
		no_of_node++;
	}
}
void insertend()
{
	Node *ptr,*temp=head;int d;
	printf("Enter the data\n");
	scanf("%d",&d);
	ptr=(Node*)malloc(sizeof(Node));
	if(head==NULL)
	{
		ptr->data=d;
		ptr->next=NULL;
		head=ptr;
		no_of_node++;
	}
	else
	{
		ptr->data=d;
		ptr->next=NULL;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=ptr;
		no_of_node++;
	}
}
void insertatpos()
{
	int p;
	printf("Enter the position\n");
	scanf("%d",&p);
	if(p>no_of_node)
		printf("INVALID POSITION\n");
	else if(p==1)
		insertbeg();
	else if(p==no_of_node+1)
		insertend();	
	else
	{
		Node *ptr,*temp,*pre;
		int d,co=0;
		printf("Enter the data\n");
		scanf("%d",&d);
		ptr=(Node *)malloc(sizeof(Node));
		ptr->data=d;
		pre=head;
		temp=head->next;
		while(co<p)
		{
			co++;
			pre=pre->next;
			temp=temp->next;
		}
		ptr->next=pre->next;
		pre->next=ptr;
		no_of_node++;
	}
}
void show()
{
	while(head!=NULL)
	{
		printf("%d  ",head->data);
		head=head->next;
	}
	printf("\n");
}
void main()
{
	int c;
	bool b=true;
	while(b)
	{
		printf("ENTER YOUR CHOICE 1/2/3/4/5");
		printf("\n1.insert at BEGINNING");
		printf("\n2.insert at ENDING");
		printf("\n3.insert at PARTICULAR POSITION");
		printf("\n4.SHOW THE RESULT");
		printf("\n5.QUIT\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				insertbeg();
				break;
			case 2:
				insertend();
				break;
			case 3:
				insertatpos();
				break;
			case 4:
				show();
				break;
			case 5:
				b=false;
				break;
			default:
				printf("INVALID CHOICE PLEASE ENTER A VALID CHOICE");
				break;		
		}
	}
}	
