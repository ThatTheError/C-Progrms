//		Hash Chaining Using Linked List

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define SIZE 9
typedef struct node
{
	int key;
	int value;
	struct node *next;
}node;
node *headArray[SIZE];
int findindex(int key)
{
	return(key%10);
}
void insert(int key,int value)
{
	int ind;
	node *item = (node *)malloc(sizeof(node));
	item->key = key;
	item->value = value;
	item->next = NULL;
	ind = findindex(key);
	if(headArray[ind]==NULL)
		headArray[ind] = item;
	else{
		node *temp = headArray[ind];
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = item;
	}
	
}
void deletee(int key)
{
	int ind = findindex(key);
	if(headArray[ind] == NULL){
		printf("Item Not Available");
		return ;
	}
	else if(headArray[ind]->next == NULL)
		headArray[ind] = NULL;
	else{
		node *temp1 = headArray[ind],*temp2 = headArray[ind];
		while(temp1->next != NULL){
			temp2 = temp1;
			temp1 = temp1->next;
		}
		temp2->next = NULL;
	}
}
void display()
{
	int i;
	for(i=0;i<SIZE;i++){
		if(headArray[i]!=NULL){
			node *temp = headArray[i];
			while(temp->next != NULL){
				printf("\nHashindex-%d,Key-%d,Value-%d",i,temp->key,temp->value);
				temp = temp->next;
			}
			printf("\nHashindex-%d,Key-%d,Value-%d",i,temp->key,temp->value);
		}
	}
}
void main()
{
	bool b = true;int ch,key,value;
	while(b)
	{
		printf("\nEnter Your Choice\n");
		printf("1.INSERT \n2.DELETE \n3.DISPLAY \n4.EXIT\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the key\n");
				scanf("%d",&key);
				printf("Enter the value\n");
				scanf("%d",&value);
				insert(key,value);
				break;
			case 2:
				printf("Enter the key which you want to delete\n");
				scanf("%d",&key);
				deletee(key);
				break;
			case 3:
				display();
				break;
			case 4:
				b=false;
				break;
			default:
				printf("Invalid choice!");
				break;
		}
	}
}
