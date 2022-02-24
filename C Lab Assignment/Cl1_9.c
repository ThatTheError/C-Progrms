#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float area,s;
	printf("enter sides of the triangle :");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c && b+c>a && c+a>b)
	{
		s=(a+b+c)/2.0;
		area=sqrt(s*(s-a)*(s-b)*(s-c));
		printf("area of the traingle is = %f",area);
	}
	else
	{
		printf("enter the sides correctly..");
	}
	return 0;
}
	
