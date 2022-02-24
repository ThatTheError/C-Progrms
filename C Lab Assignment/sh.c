#include<stdio.h>
int main()
{
	int a,b,c,sb;
	printf("enter three number..");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c && b>c)
		sb=b;
	else if(a>b && a>c && c>b)
		sb=c;
	else if(b>a && b>c && a>c)
		sb=a;
	else if(b>a && b>c && c>a)
		sb=c;
	else if(c>a && c>b && a>b)
		sb=a;
	else if(c>a && c>b && b>a)
		sb=b;
	printf("the 2nd highest number is=%d",sb);
	return 0;
}
