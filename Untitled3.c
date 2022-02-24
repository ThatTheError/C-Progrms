#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int i,a[]={0,2,4,1,3};
	for(i=0;i<5;i++)
		a[i] = a[(a[i]+3)%5];
	printf("%d",a[1]);
	return 0;
}
