/* 		86.Patrtition List 
  	By, V Gopal Krushna Patro
	Given the head of a linked list and a value x, partition it such that all nodes less 
than x come before nodes greater than or equal to x. You should preserve the original 
relative order of the nodes in each of the two partitions.			*/

#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}node;
node *head=NULL;
void einsertion(int data)
{
	node *ptr2 = NULL,*ptr=NULL;
	ptr = (node *)malloc(sizeof(node)*1);
	ptr->data = data;
	ptr->next = NULL;
	if(head == NULL){
		head = ptr;
	}
	else{
		ptr2 = head;
		while(ptr2->next != NULL){
			ptr2 = ptr2->next;
		}
		ptr2->next = ptr;
	}
}
void print(int n){
	int i;node *ptr = head;
	for(i=0;i<n;i++){
		printf("%d ",ptr->data);
		ptr = ptr->next;
	}
}
node* findkey(int data){
	node *ptr = head;
	while(ptr->data != data){
		ptr = ptr->next;
	}
	return(ptr);
}
void sortt(node *ptr1,node *ptr2){
	node *ptr3 = head;node *prev=NULL;
	if(ptr1->data < ptr3->data){
		ptr1->next = ptr3;
		head = ptr1;
	}
	else{
		while(ptr1->data > ptr3->data){
			prev = ptr3;
			ptr3 = ptr3->next;	
		}
		ptr1->next = ptr3;
		prev->next = ptr1;
	}
	return ;
}
void operation(int key){
	node *ptr = findkey(key);
	node *ptr2 = ptr->next;
	node *ptr3;
	while(ptr2->next != NULL){
		if(ptr2->data < key){
			ptr->next = ptr2->next;
			ptr3 = ptr2;
			ptr2 = ptr2->next;	
			sortt(ptr3,ptr);
		}
		else
			ptr2 = ptr2->next;
	}
	if(ptr2->data < key)
		sortt(ptr2,ptr);
}
void main()
{
	int i,x,n,key;
	printf("Enter no.of element you want to insert");
	scanf("%d",&n);
	printf("Enter the elements");
	for(i=0;i<n;i++){
		scanf("%d",&x);
		einsertion(x);
	}
	printf("Enter the key value");
	scanf("%d",&key);
	operation(key);
	printf("Elements of the list..");
	print(n);
}
