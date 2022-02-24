#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int len,top=-1,*indexx,i,j,k;
void push(char*,char,int);
void pop(char*);
void removee(char*,int);
void last(char*);
void main()
{
	char ch[]="))((123)13(13)13((13)))((!)())))))",*stack;
	len=strlen(ch);
	stack=(char *)malloc(sizeof(char)*len+1);
	indexx=(int *)malloc(sizeof(int)*len+1);
	for(i=0;i<len;i++)
	{
		if(ch[i]=='(')
			push(stack,ch[i],i);
		else if(ch[i]==')' && stack[top]=='(')
			pop(stack);
		else if(ch[i]==')' && top==-1)
			removee(ch,i);
	}
	last(ch);
	for(i=0;i<len;i++){
		printf("%c",ch[i]);
	}
}
void push(char *stack,char ch,int in)
{
	top=top+1;
	stack[top]=ch;
	indexx[top]=in;
}
void pop(char *stack)
{
	top=top-1;
}
void removee(char *ch,int i)
{
	ch[i]='*';
}
void last(char *ch)
{
	for(k=0;k<=top;k++){
	for(i=0;i<=top;i++){
		for(j=indexx[i];j<len;j++){
			ch[j]=ch[j+1];
		}
		len--;
	}}
	for(k=0;k<len;k++){
	for(i=0;i<len;i++)
	{
		if(ch[i]=='*'){
			for(j=i;j<len;j++){
				ch[j]=ch[j+1];
			}		
			len--;
		}
	}}
}

