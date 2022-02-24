#include<stdio.h>
int main()
{
	int x=0, y=10, w=20, z, t=1, f=0;
	z = ((x=y) < 10);
	printf("%d",z);
	z = (x==5 && y<15);
	printf("\n%d",z);
	z = (x==0 && y>5 && w==10);
	printf("\n%d",z);
	z = (x==0 || y>5 && w==20);
	printf("\n%d",z);
	z = (t && t && f && y && x);
	printf("\n%d",z);
	z = (f || ++x || w - 20 || x);
	printf("\n%d",z);
	return 0;
}
