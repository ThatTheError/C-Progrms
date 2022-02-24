#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	struct node *left;
	int data;
	struct node *right; 
}node;
node* createnode(int data)
{
	node *ptr;
	ptr=(node *)malloc(sizeof(node));
	ptr->data=data;
	ptr->left=NULL;
	ptr->right=NULL;                               
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
int main()
{
	node *tn,*root;
	int x=5;
	tn=createnode(x);
	//printf("%d",tn->data);
	root=tn;
	tn=createnode(6);
	root->left=tn;
	tn=createnode(7);
	root->right=tn;
	tn=createnode(8);
	root->left->left=tn;
	tn=createnode(9);
	root->right->right=tn;
	printf("inorder");
	inorder(root);
	printf("\npreorder");
	preorder(root);
	printf("\npostorder");
	postorder(root);
	return 0;
}
