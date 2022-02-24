#include<stdio.h>
int main()
{
	int a,b,c,max,min;
	printf("enter three number ..");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	max=a;
	else if(b>a && b>c)
	max=b;
	else 
	max=c;
	if(a<b && a<c)
	min=a;
	else if(b<a && b<c)
	min=b;
	else
	min=c;
	printf("maximun number is %d \nminimun number is %d",max,min);
	return 0;
}
