#include<stdio.h>
#define MAX 20
typedef struct stack
{
	int top;
	char arr[MAX];
}stack;
void init(stack *st)
{
	st->top=-1;
}
void push(stack *st,char x)
{
	if(st->top==MAX-1)
	{
		printf("overflow");
		return;
	}
	else
	{
		st->top++;
		st->arr[st->top]=x;
	}
}
int pop(stack *st)
{
	int t;
	if(st->top==-1)
	{
		printf("underflow");
	}
	else
	{
		t=st->arr[st->top];
		st->top--;
	}
	return(t);
}
int main()
{
	stack st;
	char ch[100];
	printf("enter your expresiion");
	gets(ch);
	for(i=0;ch[i]!='\0';i++)
	{
		if(isoperand())
		{
			push(&st,ch[i]);
		}
	}
}

