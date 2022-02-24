#include<stdio.h>
int main()
{
	int a[8],fl,sl,i;
	printf("enter the elements of the array");
	for(i=0;i<8;i++)
	{
		scanf("%d",&a[i]);
	}
	fl=0,sl=0;
	for(i=0;i<8;i++)
	{
		if(a[i]>fl)
		{
			sl=fl;
			fl=a[i];
		}
		else if(a[i]>sl)
		{
			sl=a[i];
		}
	}
	printf("first largest is %d and 2nd largest is %d",fl,sl);
	return 0;
}
