#include<stdio.h>
int main()
{
	int a=5,b=7,z,m,k;
	z = a++ + ++b + ++a - a + ++b;
	m = (a++ , a+=5, a-1);
	k = a > b ? a++ : a-- ? b+1 : b+5 ;
	printf("z=%d",z);
	printf("\nm=%d",m);
	printf("\nk=%d",k);
	return 0;
}
