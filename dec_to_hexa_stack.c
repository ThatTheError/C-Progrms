#include<stdio.h>
#define MAX 20
typedef struct stack
{
	int top;
	int arr[MAX];
}stack;
void init(stack *);
void push(stack *,int);
int pop(stack *);
int main()
{
	stack st;
	int n,rem;
	printf("enter the decimal no..");
	scanf("%d",&n);
	init(&st);
	while(n>=16)
	{
		rem=n%16;
		push(&st,rem);
		n=n/16;
	}
	push(&st,n);
	while(st.top!=-1)
	{
		if(st.arr[st.top]>9)
		{
			printf("%c",st.arr[st.top]+55);
		}
		else
		{
			printf("%d",st.arr[st.top]);
		}
		st.top--;
	}
}
void init(stack *st)
{
	st->top=-1;
}
void push(stack *st,int x)
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


