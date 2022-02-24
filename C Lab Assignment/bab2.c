#include<stdio.h>
#include<math.h>
int area(int,int,int);
int main()
{
	int a,b,c,arr;
	printf("enter the sides");
	scanf("%d%d%d",&a,&b,&c);
	arr=area(a,b,c);
	printf("area of the traingle is %d",arr);
	return 0;
}
int area(int a,int b,int c)
{
	int s,ar;
	s=(a+b+c)/2;
	ar=sqrt(s*(s-a)*(s-b)*(s-c));
	return(ar);
}
