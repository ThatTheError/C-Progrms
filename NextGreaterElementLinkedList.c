//			Next Greater Node In Linked List

#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}node;
node *head;
void einsert(int);
void nextGreater(int*,int);
void main()
{
	int i,no,n,*array;
	head = NULL;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Enter the elements..\n");
	for(i=0;i<n;i++){
		scanf("%d",&no);
		einsert(no);	
	}
	array = (int *)malloc(sizeof(int)*n);
	nextGreater(array,n);
	printf("Next Greater Elements of the List is \n");
	for(i=0;i<n;i++){
		printf("%d ",array[i]);
	}
}
void einsert(int data){
	node *ptr,*ptr2=head; ptr = (node *)malloc(sizeof(node)*1);
	ptr->data = data;
	ptr->next = NULL;
	if(head == NULL)
		head = ptr;
	else{
		while(ptr2->next != NULL){
			ptr2 = ptr2->next;
		}
		ptr2->next = ptr;
	}
}
void nextGreater(int *array,int n){
	node *ptr1,*ptr2; ptr1 = head;int count = 0,i,j;
	for(i=0;i<n-1;i++){
		ptr2 = ptr1->next;
		for(j=i+1;j<n;j++){
			if(ptr2->data > ptr1->data){
				array[count] = ptr2->data;
				break;
			}
			ptr2 = ptr2->next;
		}
		if(j==n)
			array[count] = 0;
		count++;
		ptr1 = ptr1->next;
	}
	array[count] = 0;
}
