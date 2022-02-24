/*921. Minimum Add to Make Parentheses Valid
	Example 1:			||	Example 2:			
	Input: s = "())"	||	Input: s = "((("
	Output: 1			||	Output: 3					*/

#include<stdio.h>
#include<stdlib.h>
int n,top=-1;
char *stack;
void push(char ch);
void pop();
void main()
{
	char *para;int i;
	printf("Enter the size of the string");
	scanf("%d",&n);
	para = (char *)malloc(sizeof(char)*n);
	stack = (char *)malloc(sizeof(char)*n);
	printf("Enter the string");
	for(i=0;i<n;i++){
		scanf("%c",&para[i]);
	}
	for(i=0;i<n;i++){		//())()(()()()
		if(para[i]=='(')
			push(para[i]);
		else if(para[i]==')' && top>=0 && para[top]=='(')
			pop();
		else
			push(para[i]);
	}
	printf("Minimum %d Add to Make the Paranthesis Valid",top+1);
}	
void push(char ch)
{
	top=top+1;
	stack[top]=ch;
}
void pop()
{
	top=top-1;
}
	
	
