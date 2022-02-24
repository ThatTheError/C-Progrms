#include<stdio.h>
int main()
{
	int x,y;
	printf("enter a number");
	scanf("%d",&x);
	y=(~x)+1;
	printf("1's complement of the number is %x",~x);
	printf("\n2's complement of the number is %x",y);
	return 0;
}

