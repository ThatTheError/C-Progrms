#include<stdio.h>
void swap(int,int);
int main()
{
	int n1,n2;
	printf("enter n1 and n2..");
	scanf("%d%d",&n1,&n2);
	swap(n1,n2);
	return 0;
}
void swap(int x,int y)
{
	int t;
	t=x;
	x=y;
	y=t;
	printf("after swapping the value the value of n1=%d and value of n2=%d",x,y);
}
