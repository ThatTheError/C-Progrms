#include<stdio.h>
struct length
{
	int f,i;
};
int main()
{
	struct length l1,l2;
	int inch,feet;
	printf("enter the length1 in feets and inches..");
	scanf("%d%d",&l1.f,&l1.i);
	printf("enter the length2 in feets and inches..");
	scanf("%d%d",&l2.f,&l2.i);
	inch=(l1.i+l2.i)%12;
	feet=(l1.i+l2.i)/12;
	feet=feet+(l1.f+l2.f);
	printf("sum of two length is %d feets and %d inches",feet,inch);
	return 0;
}
