// c program to print the largest and smallest number in the array
#include<stdio.h>
int main()
{
	int a[]={3,45,12,6,77,8,0},i,g,s;
	g=a[0];
	s=a[0];
	for(i=1;i<=6;i++)
	{
		if(a[i]>g)
		{
			g=a[i];
		}
		if(a[i]<s)
		{
			s=a[i];	
		}
	}
	printf("greates number is %d and smallest number is %d",g,s);
}
