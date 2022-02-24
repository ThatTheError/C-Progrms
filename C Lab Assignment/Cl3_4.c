#include<stdio.h>
int main()
{
	int Z1,Z2,Z3,a=5,b=10;
	Z1 = (a==b) || (a>=5) &&(b<=a);
	Z2 = (!(a) || (b-a)); 
	Z3 = (0 || 1 && 5);
	printf("%d",Z1);
	printf("\n%d",Z2);
	printf("\n%d",Z3);
	return 0;
}
