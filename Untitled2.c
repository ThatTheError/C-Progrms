#include<stdio.h>
#include<conio.h>
int main()
{
	float a,b,c,d,e,s,av;
	printf("enter marks");
	scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e);
	s=a+b+c+d+e;
	av=s/5;
	printf("%f %f",s,av);
	return 0;
}
