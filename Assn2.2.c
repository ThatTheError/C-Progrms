/*  Define Abstract Data Type(ADT) and Data Structure. Define Stack. Declaring structure of an
integer stack, write push, pop, isFull and isEmpty function. Write a C program to check
whether a string is a palindrome or not. */

#include<stdio.h>
#define MAX 20
typedef struct stackdt
{
	int stack[MAX];
	int top;	
}stackdt;
stackdt st;
int isempty(stackdt *st)
{
	if(st->top<0)
		return 1;
	else
		return 0;
}
int isfull(stackdt *st)
{
	if(st->top==MAX)
		return 1;
	else
		return 0;
}
void push(stackdt *st,int x)
{
	st->top++;
	st->stack[st->top]=x;
}
int pop(stackdt *st)
{
	int x;
	x=st->stack[st->top];
	st->top--;
	return(x);
}
int main()
{
	stackdt st;
	st.top=-1;
	int i=0,x,pal=1,c;
	char str[20];
	printf("enter the string");
	gets(str);
	//c=isfull(&st);
	if(!isfull(&st))
	{
		while(str[i]!='\0')
		{
			push(&st,str[i]);
			i++;
		}	
	}
	else
	{
		printf("String is too large");
		return;
	}
	i=0;
	//c=isempty(&st);
	if(!isempty(&st))
	{
		while(st.top>-1)
		{
			if(str[i]!=pop(&st))
			{
				pal=0;
				break;
			}
			i++;
		}	
	}
	else
	{
		printf("\nyou haven't entered any string..");
		return;
	}
	if(pal==1)
		printf("\npallindrome string");
	else
		printf("\nnot a pallindrome string");
	return 0;
}
