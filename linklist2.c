#include<stdio.h>
#include<stdlib.h>
typedef struct node
{ int data;
struct node *link;
}node;
typedef struct slist
{ node *head;
}slist;
void init_list(slist *); void insert_beg(slist *,int);
void insert_end(slist*,int); void insert_choice(slist*,int);
void insert_after_node(slist*,int); void list_traversal(slist *);
int deleted_beg(slist*); int deleted_end(slist *);
int deleted_pos(slist *); int deleted_val(slist *);
void sort_data(slist *); void sort_link(slist *);
void deleted_list(slist *); void search(slist *, int);
int count(slist *); void backward_traversal(slist *s);
int main( )
{ int choice, no, val; slist s;
 init_list(&s); /* ® All the copy rights are reserved to KLN */
while(1)
{ printf("\n1 . Insert at Beginning\n"); printf("2 . Insert at End\n");
  
 printf("3 . Insert at a Position\n"); printf("4 . Insert after a Node\n");
 printf("5 . List Traversal\n"); printf("6 . Delete at Beginning\n");
 printf("7 . Delete at End\n"); printf("8 . Delete by Value\n");
 printf("9 . Delete by Position\n"); printf("10. Sorting by Swaping Information\n");
printf("11. Exit\n");
 printf("\n\nEnter Your Choice: ");
scanf("%d",&choice);
switch(choice)
{ case 1: printf("Enter a Number To Insert: "); scanf("%d",&no);
 insert_beg(&s,no); break;
 case 2: printf("Enter a Number To Insert: "); scanf("%d",&no);
 insert_end(&s,no); break;
 case 3: printf("Enter a Number To Insert: "); scanf("%d",&no);
 insert_choice(&s,no); break;
 case 4: printf("Enter a Number To Insert: "); scanf("%d",&no);
 insert_after_node(&s,no); break;
 case 5: if(s.head != NULL) list_traversal(&s);
 else printf("\nLIST IS EMPTY\n"); break;
 case 6: no= deleted_beg(&s);
 if(no != -1) printf("\nThe deleted Element is %d\n", no);
 break;
 case 7: no= deleted_end(&s);
 if(no != -1) printf("\nThe deleted Element is %d\n", no);
 break;
 case 8: no= deleted_val(&s);
 if(no != -1) printf("\nThe deleted Element is %d\n", no);
 break;
 case 9: no= deleted_pos(&s);
 if(no != -1) printf("\nThe deleted Element is %d\n", no);
 break;
 case 10: sort_data(&s); break;
 case 11: exit(0);
}
}
return 0;
}
void init_list(slist *s)
{ s->head = NULL;
}
void insert_beg(slist *s, int no)
{ node *newnode;
newnode = (node *) malloc ( sizeof(node) );
if(newnode==NULL)
{ printf("Insufficient Memory\n"); return;
}
newnode->data=no;
newnode->link= s->head;
s->head = newnode;
}
void insert_end(slist *s, int no)
{ node *newnode, *ptr;
newnode=(node *)malloc(sizeof(node));
if(newnode==NULL)
{ printf("Insufficient Memory\n"); return;
}
 newnode->data=no;
newnode->link =NULL;
/*checking whether it is the 1st node going to insert i.e. if LIST is EMPTY*/
if(s->head == NULL)
{ s->head = newnode; return; /* ® All copy rights are reserved to KLN */
}
ptr=s->head;
/*Traversing to the Last Node if the list contains more than one Node*/
while(ptr->link != NULL)
ptr =ptr->link;
ptr->link = newnode;
}
void insert_choice(slist *s,int no)
{ int pos; node *newnode, *ptr;
newnode=(node *)malloc(sizeof(node));
if(newnode==NULL) { printf("Insufficient Memory\n"); return; }
newnode->data=no;
printf("Enter the Position to Insert: "); scanf("%d", &pos);
 /* The Position you entered is 1, then the node is inserted at beginning */
if(pos==1)
{ newnode->link=s->head;
 s->head=newnode; return;
}

/* The Position you entered is 2 or more, when the List is Empty */
if(pos >=2)
{ if(ptr == NULL)
 { printf("\nThe position you entered is wrong\n"); return;
 }
}
ptr=s->head;
/* Check the existence position and move the ptr to pos-1
th Node */
while(pos >2)
{ /* the position entered is not in the list */
 if(ptr->link == NULL)
 { printf("\nThe position you entered is wrong\n"); return;
 }
 ptr = ptr->link; pos = pos-1;
}
newnode->link=ptr->link;
 ptr->link=newnode;
}
  
void insert_after_node(slist *s, int no)
{ int val, flag=0; node *newnode, *ptr;
newnode=(node *)malloc(sizeof(node));
if(newnode==NULL)
{ printf("Insufficient Memory\n"); return;
}
newnode->data=no;
 printf("Enter the Node after which we want to Insert: "); scanf("%d", &val);
 ptr=s->head;
/*checking whether such value exists or not and also moving to the desired node ptr*/
 while(ptr != NULL)
 { if(ptr->data==val)
{ flag=1; break;
}
ptr=ptr->link;
 }
/* When the required node val is found */
if(flag==1)
 { newnode->link=ptr->link;
 ptr->link=newnode;
}
else printf("\nSuch Node Does Not Exits\n");
}
void list_traversal(slist *s)
{ int i=1; node *temp;
temp = s->head;
 while(temp!=NULL)
{ printf("[%d]==>%d\t", i++, temp->data);
temp=temp->link;
}
}
int deleted_beg(slist *s)
{ int n; node *temp;
/* If List is Empty */
if(s->head==NULL)
{ printf("No elements present to Delete\n\n"); return -1;
}
temp = s->head;
n=temp->data;
 s->head=temp->link;
free(temp);
return(n);
}
int deleted_end(slist *s)
{ int n; node *temp, *prev;
 /* If List is Empty */
if(s->head ==NULL)
{ printf("No Elements Present to Delete\n\n"); return -1;
}
temp=s->head;
/* If List contains only one node */
 if(temp->link ==NULL)
 { s->head =NULL;
 n=temp->data;
 free(temp);
return(n);
 }
/* List contains 2 or more nodes move to the last but not one node*/
while(temp->link != NULL)
{ prev = temp;
temp=temp->link;
}
prev->link= NULL;
n=temp->data;
free(temp);
return(n);
}
int deleted_val(slist *s)
{ int n; node *temp, *prev; int val,flag=0;
 /* If List is Empty */
if(s->head==NULL)
{ printf("No Elements Present to Delete\n\n"); return -1;
}
printf("Enter the Value to Delete: ");
scanf("%d", &val);
 temp=s->head;

/* When the deleted element is the first element */
 if(temp->data==val)
 { s->head=temp->link;
n=temp->data;
free(temp);
return(n);
 }
/*Moving to the Desired Node, and also mark the prev node*/
while(temp!=NULL)
{ if(temp->data==val)
{ flag=1; break;
}
  
prev=temp;
temp=temp->link;
}
if(flag==1)
{ prev->link=temp->link;
 n=temp->data;
free(temp);
return(n);
 }
else
 { printf("No Such Value Exists to Delete\n"); return -1;
 }
}
int deleted_pos(slist *s)
{ int n; node *temp, *prev; int pos;
 /*Checking Whether the List is empty or not*/
if(s->head==NULL)
{ printf("No Elements Present to Delete\n\n"); return -1;
}
temp=s->head;
printf("Enter the Position to Delete: ");
scanf("%d", &pos);
/* When the deleted element is the first element */
if(pos==1)
 { s->head=temp->link;
n=temp->data;
free(temp);
return(n);
 }
/* ® All rights are reserved to KLN */
/*Moving to the Desired Position i.e. temp node*/
while(pos>1)
{
 if(temp->link == NULL)
{ printf("\nThe position you entered is wrong\n");
return -1;
 }
prev=temp;
temp=temp->link;
pos=pos-1;
}
 prev->link=temp->link;
 n=temp->data;
free(temp);
return(n);
}
  
int count(slist *s)
{ node *temp; int c=0;
 temp = s->head;
 /*Check Whether list contains any node or not*/
 if(temp==NULL)
 return 0;
 while(temp != NULL)
 { c++;
temp=temp–>link;
 }
 return c;
}
void search(slist *s, int val)
{ node *temp; int flag=0,c=0;
 temp = s->head;
 /*Check Whether list contains any node or not*/
 if(temp==NULL)
 { printf("No elements Present in the List\n"); return;
 }

/*Searching the Node*/
 while(temp != NULL)
 {
if(temp–>data == val)
{ flag=1;
break;
}
temp=temp–>link;
c++;
 }
 if(flag==1)
 printf("\nSuch Node Presents in the List at position :: %d\n", c+1);
else
 printf("\nNo Such Node Presents in the List\n");
} /* ® All rights are reserved to KLN */
/* SORTING BY INTERCHANGING THE DATA BY SELECTION SORT */
void sort_data(slist *s)
{ node *a, *b; int i, j, tempno, count=0;
/* If List is Empty */
if(s->head==NULL)
{ printf("No Elements Present to Sort\n");
return;
}
a=s->head;
  
/*Counting the Number of Nodes Present in the List*/
while(a != NULL)
{ count++; a=a->link;
}
/*SORTING LOGIC*/
a=s->head;
for(i=1;i<count;i++)
{ b=a->link;
for(j=i+1;j<=count;j++)
{
if(a->data > b->data)
{ tempno=a->data;
a->data=b->data;
b->data=tempno;
}
b=b->link;
}
a=a->link;
}
 printf("\nSorting was done successfully by swapping the values\n");
}
/* SORTING BY INTECHANGING THE LINKS */
void sort_link(slist *sl)
{
node *p, *q, *r, *s, *temp;
s=NULL;
 if(sl->head == NULL)
{ printf("No Elements Present to Sort\n");
return;
}
/* r precedes p and s points to the node up to which comparisons are to be made */
while ((sl->head)->link != s )
{ r = p = sl->head ;
q = p->link ;
while ( p != s )
{
if ( p->data > q->data )
{
if ( p == sl->head )
{ temp = q->link;
q->link = p;
p->link = temp;
sl->head = q;
r = q ;
}
  
 
else
{ temp = q->link;
q->link = p;
p->link = temp;
r->link = q;
r = q;
}
} /* End of outer if */
else
{ r = p;
p = p->link;
}
q = p->link;
if ( q == s )
s = p;
} /* End of inner while loop */
} /* End of outer while loop */
}
/* BACKWARD TRAVERSAL RECURSIVE FUNCTION */
void backward_traversal(slist *s)
{ node *temp;
temp = s->head;
while(temp != NULL)
{ backward_traversal(temp–>link);
printf("|%u|===>> %d\t",temp,temp–>data);
return;
}
}
/* DELETE ENTIRE LIST */
void deleted_list(slist *s)
{ node *temp;
/*Checking Whether the List is empty or not*/
if( s->head==NULL)
{ printf("List is Emtpy\n");
return;
}
while(s->head !=NULL)
{ temp=s->head;
s->head=temp–>link;
free(temp);
}
printf("\nEntire List is Deleted\n");
}
