#include<stdio.h>
int main()
{
	int pre,nxt;
	char ch;
	printf("enter a character :");
	scanf("%c",&ch);
	if(ch==65)
	{
		pre=90;
		nxt=ch+1;
	}
	else if(ch==90)
	{
		nxt=65;
		pre=ch-1;
	}
	else if(ch==97)
	{
		pre=122;
		nxt=ch+1;
	}
	else if(ch==122)
	{
		pre=ch-1;
		nxt=97;
	}
	else
	{
		nxt=ch+1;
		pre=ch-1;
	}
	printf("previous character is %c and nxt character is %c",pre,nxt);
	return 0;
}
