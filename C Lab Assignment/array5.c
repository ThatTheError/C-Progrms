// c program to print the 2nd largest number 
#include<stdio.h>
int main()
{
	int a[]={12,18,22,6,9,29,7,27,29,1},l,d,d1,i;
	l=a[0];
	for(i=1;i<10;i++)
	{
		if(a[i]>l)
		{
			l=a[i];
		}
	}
	printf("the largest is %d",l);
	d=l;
	for(i=0;i<10;i++)
	{
		d1=l-a[i];
		if(d1<d && d1!=0)
		{
			d=d1;
		}
	}
	printf("the 2nd largest number is %d",l-d);
	return 0;
}
