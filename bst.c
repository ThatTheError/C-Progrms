#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
{
	struct node *left;
	int data;
	struct node *right; 
}node;
node* createnode(int data)
{
	int ch,x;
	node *ptr;
	ptr=(node *)malloc(sizeof(node));
	ptr->data=data;
	printf("if you want to create left of %d node press 1 else press 0\n",data);
	scanf("%d",&x);
	if(x==1){
		printf("Enter the data \n");
		scanf("%d",&x);
		ptr=createnode(x);
	}
	else{
		ptr->left=NULL;
	}
	printf("if you want to create right of %d node press 1 else press 0\n",data);
	scanf("%d",&x);
	if(x==1){
		printf("Enter the data \n");
		scanf("%d",&x);
		ptr=createnode(x);
	}
	else{
		ptr->right=NULL;
	}
	return(ptr);
}
/*  5
  6   7  
8       9 */
void inorder(node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("\n%d",root->data);
		inorder(root->right);
	}
}
void postorder(node *root)
{
	if(root!=NULL)
	{
		postorder(root->right);
		printf("\n%d",root->data);
		postorder(root->left);
	}
}
void preorder(node *root)
{
	if(root!=NULL)
	{
		printf("\n%d",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
node *insert(node *root,int x)
{
	node *newnode=createnode(x);
	node *ptr;
	//if(root==NULL)
	//{
	//	return(newnode);
	//}
	ptr=root;
	while(ptr->left!=NULL || ptr->right!=NULL)
	{
		if(ptr->data>x)
			ptr=ptr->left;
		else
			ptr=ptr->right;
	}
	if(ptr->data>x)
		ptr->left=newnode;
	else
		ptr->right=newnode;
}
int main()
{
	int x,e,i,n;
	node *tn,*root;
	printf("Enter data of root");
	scanf("%d",&x);
	tn=createnode(x);
	//printf("%d",tn->data);
	root=tn;
	//root=NULL;
	//printf("Enter how many node you want to create..");
	//scanf("%d",&n);
	//for(i=0;i<n;i++)
	//{
	//	scanf("%d",&e);
	//	root=insert(root,e);
	//}
	printf("inorder");
	inorder(root);
	printf("\npreorder");
	preorder(root);
	printf("\npostorder");
	postorder(root);
	return 0;
}
