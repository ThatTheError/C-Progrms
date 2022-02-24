#include<stdio.h>
typedef struct
{
	int top;
	int arr[3];
}stack;
void init(stack *);
void push(stack *,int);
int pop(stack *,int);
int main()
{
	stack st;
	int res,a,b,c,p;
	printf("enter 3 elements for the stack");
	scanf("%d%d%d",&a,&b,&c);
	printf("enter the element you want to popout from the stack");
	scanf("%d",&p);
	init(&st);
	push(&st,a);
	push(&st,b);
	push(&st,c);
	pop(&st,p);
	printf("\n your popout data is %d",p);
	return 0;
}
void init(stack *s)
{
	s->top=-1;
}
void push(stack *s,int x)
{
	if(s->top==2)
	{
		printf("no space to push...");
		return;
	}
	s->top++;
	s->arr[s->top]=x;
}
int pop(stack *s,int x)
{
	int i;
	if(s->top==-1)
	{
		printf("stack is empty..");
		return 0;
	}
	for(i=0;i<s->top;i++)
	{
		if(s->arr[i]==x)
		{
			s->top--;
		}
	}
	if(i==s->top)
	{
		printf("item is not present in the stack..");
	}
	printf("\nafter popout the elemnt your stack is..");
	for(i=0;i<=s->top;i++)
	{
		printf("\t%d",s->arr[i]);
	}
}

