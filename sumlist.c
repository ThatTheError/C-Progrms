#include<stdio.h>
#include<stdlib.h>
typedef struct ListNode {
	int val;
	struct ListNode* next;
} ListNode;	
ListNode *head3 = NULL;
ListNode *head1,*head2;
ListNode *ptr1,*ptr2,*ptr11,*ptr22;
int remi =0,summ;
void sum(){
	ListNode *ptr = (ListNode *)malloc(sizeof(ListNode)*1);
	ListNode *ptr1,*ptr11,*ptr2,*ptr22;
	ptr1 = head1;ptr11 = head1;ptr2 = head2;ptr22 = head2;
	while(ptr11->next != NULL){
		ptr11 = ptr1;
		ptr1 = ptr1->next;
	} 
	while(ptr22->next != NULL){
		ptr22 = ptr2;
		ptr2 = ptr2->next;
	}
	summ = (ptr1->val+ptr2->val+remi)%10;
	remi = (ptr1->val+ptr2->val+remi)/10;
	ptr->val = summ;
	ptr->next = NULL;
	if(head3 == NULL)
		head3 = ptr;
	else{
		ptr->next = head3;
		head3 = ptr;
	}
	ptr11->next = NULL;
	ptr22->next = NULL;
}
/*void sum(){
	while(ptr11->next != NULL){
	ListNode *ptr = (ListNode *)malloc(sizeof(ListNode)*1);
	summ = (ptr1->val+ptr2->val+remi)%10;
	remi = (ptr1->val+ptr2->val+remi)/10;
	ptr->val = summ;
	ptr->next = NULL;
	if(head3 == NULL)
		head3 = ptr;
	else{
		ptr->next = head3;
		head3 = ptr;
	}
	ptr11 = ptr1;
	ptr1 = ptr1->next;
}
}*/
ListNode *createList(int n,ListNode *h){
	ListNode *ptr;
	ptr = (ListNode *)malloc(sizeof(ListNode)*1);
	ptr->val = n;
	ptr->next = NULL;
	if(h==NULL)
		h = ptr;
	else{
		ptr->next = h;
		h = ptr;
	}
	return h;
}	
int main() {
	int i,n1,n2,rem;
	head1 = NULL,head2 = NULL;
	printf("Enter first no\n");
	scanf("%d",&n1);
	while(n1>0){
		rem = n1%10;
	    head1 = createList(rem,head1);
	    n1 = n1/10;
	}
	printf("Enter 2nd no\n");
	scanf("%d",&n2);
	while(n2>0){
  		rem = n2%10;
	    head2 = createList(rem,head2);
	    n2 = n2/10;
	}
	ListNode *p1=head1,*p2=head2;
	printf("FirstList\n");
	while(p1->next != NULL){
		printf("%d ",p1->val);
		p1 = p1->next;
	}
	printf("%d \n",p1->val);
	printf("SecondList\n");
	while(p2->next != NULL){
		printf("%d ",p2->val);
		p2 = p2->next;
	}
	printf("%d ",p2->val);
	//ptr1 = head1;ptr11 = head1;ptr2 = head2;ptr22 = head2;
	sum();
	while(head3->next != NULL){
	printf("%d",head3->val);
	head3 = head3->next;
	}
	return 0;
}
